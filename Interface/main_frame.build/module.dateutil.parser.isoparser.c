/* Generated code for Python module 'dateutil.parser.isoparser'
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

/* The "_module_dateutil$parser$isoparser" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dateutil$parser$isoparser;
PyDictObject *moduledict_dateutil$parser$isoparser;

/* The declarations of module constants used, if any. */
static PyObject *const_str_digest_dc41cce4b2abe5b79410e80649d4c406;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain_timestr;
static PyObject *const_str_plain_ordinal_day;
static PyObject *const_str_plain__calculate_weekdate;
extern PyObject *const_int_pos_24;
static PyObject *const_str_digest_9544b87982742993c0f5f3a4b895482e;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple;
static PyObject *const_list_str_plain_isoparse_str_plain_isoparser_list;
extern PyObject *const_str_plain_sep;
extern PyObject *const_str_plain_comp;
extern PyObject *const_str_plain_timedelta;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_angle_metaclass;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_group;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_month;
extern PyObject *const_str_plain_encode;
static PyObject *const_str_plain_isocalendar;
static PyObject *const_str_plain__FRACTION_REGEX;
extern PyObject *const_str_plain_any;
static PyObject *const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c;
extern PyObject *const_int_neg_1;
extern PyObject *const_int_pos_128;
extern PyObject *const_int_pos_23;
static PyObject *const_str_digest_a1e8cc94a5fb27196afc4cccac879310;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_None;
static PyObject *const_str_digest_eeece1440ba68c7ebd4a1a68d1035641;
static PyObject *const_str_plain_has_sep;
extern PyObject *const_str_plain_dateutil;
static PyObject *const_str_plain_DEFAULT_ISOPARSER;
static PyObject *const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c;
extern PyObject *const_int_pos_5;
static PyObject *const_str_digest_bc384ce083cb344b6bc03ca5721ca286;
static PyObject *const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_isoparse;
static PyObject *const_str_digest_a312668a277fce14e7c7bca251a8f70f;
extern PyObject *const_str_plain_isleap;
extern PyObject *const_str_plain_read;
static PyObject *const_str_digest_49da3f2ec8546545939c6eaeb04542e5;
static PyObject *const_str_plain_week_1;
static PyObject *const_bytes_chr_87;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain_pos;
static PyObject *const_str_digest_3f489f137f8d33c449617a3431dc588b;
static PyObject *const_str_plain__parse_isodate_uncommon;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_re;
static PyObject *const_str_digest_f535bcb99a549c8dd80a10510acb23d6;
static PyObject *const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple;
extern PyObject *const_str_plain_components;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_digest_3b056f8bb9576af3abcbb4ddfc662cd4;
extern PyObject *const_str_plain_time;
static PyObject *const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c;
static PyObject *const_bytes_chr_45;
extern PyObject *const_tuple_str_plain_tz_tuple;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_slice_int_0_int_pos_4_none;
extern PyObject *const_slice_int_0_int_pos_1_none;
static PyObject *const_tuple_str_plain_isoparser_tuple_type_object_tuple_tuple;
static PyObject *const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple;
extern PyObject *const_str_angle_genexpr;
static PyObject *const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple;
static PyObject *const_bytes_chr_90;
static PyObject *const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_str_in;
extern PyObject *const_str_plain_hours;
static PyObject *const_slice_int_pos_2_int_pos_3_none;
extern PyObject *const_str_plain_wraps;
extern PyObject *const_str_plain_raise_from;
static PyObject *const_str_digest_273350d1d4e721d00a990e5736020868;
static PyObject *const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
static PyObject *const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
static PyObject *const_str_plain_jan_4;
extern PyObject *const_str_plain_six;
static PyObject *const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c;
static PyObject *const_str_digest_7b9c8b2f585fc922a471d79cd765fdad;
static PyObject *const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29;
static PyObject *const_str_plain_parse_isodate;
static PyObject *const_str_digest_9fd11276e9e20d1403d77c01811be30a;
static PyObject *const_str_digest_002af61a9928cdbb7f76be79a3ec7e26;
static PyObject *const_str_plain_dayno;
static PyObject *const_str_plain__TIME_SEP;
extern PyObject *const_str_plain_frac;
static PyObject *const_str_digest_ad78b016e2101d9307280b1e79d08c75;
extern PyObject *const_str_plain_e;
extern PyObject *const_int_pos_8;
static PyObject *const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple;
static PyObject *const_tuple_bytes_digest_d541ff279fd53a8084cb698b9eda71d0_tuple;
extern PyObject *const_str_plain_isoparser;
static PyObject *const_bytes_digest_d541ff279fd53a8084cb698b9eda71d0;
static PyObject *const_str_plain_us_str;
static PyObject *const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25;
static PyObject *const_bytes_chr_122;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_d81e52c7ef5be9c491b182f253980414;
static PyObject *const_str_plain_zero_as_utc;
extern PyObject *const_str_plain_calendar;
static PyObject *const_str_plain_base_date;
static PyObject *const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_int_pos_59;
extern PyObject *const_str_plain_len_str;
static PyObject *const_str_digest_87476696c188cfa8709a5079d606de15;
extern PyObject *const_int_pos_10;
static PyObject *const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4;
static PyObject *const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_digest_ba418bb085ae97b5ed215c87204a41b8;
static PyObject *const_str_plain__DATE_SEP;
extern PyObject *const_str_plain_match;
extern PyObject *const_int_pos_60;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_tzutc;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_tuple_str_plain_wraps_tuple;
extern PyObject *const_str_plain_f;
static PyObject *const_str_digest_d13546195c9d971ea2eff59832fbe688;
extern PyObject *const_slice_none_int_pos_6_none;
static PyObject *const_str_digest_721bc1aa30b64bd3642a7350541ba875;
static PyObject *const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247;
static PyObject *const_str_plain__takes_ascii;
extern PyObject *const_int_0;
static PyObject *const_str_plain_dt_str;
extern PyObject *const_int_pos_54;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_tz;
static PyObject *const_list_int_pos_1_int_pos_1_int_pos_1_list;
extern PyObject *const_str_plain_tzstr;
extern PyObject *const_str_plain_minutes;
static PyObject *const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple;
static PyObject *const_str_digest_06aa45119164e8a43a0b7ab7cb1fcba7;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_digest_9d79937694e45079e3b300f128025ef4;
extern PyObject *const_str_digest_75fd71b1edada749c2ef7ac810062295;
extern PyObject *const_str_plain_datestr;
extern PyObject *const_str_plain_component;
static PyObject *const_bytes_chr_43;
static PyObject *const_str_digest_b739213d0714b4dd82f3ec1e92951ccc;
extern PyObject *const_str_plain_year;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_angle_lambda;
static PyObject *const_set_2fbb033eaf09004b738b14061b4856f6;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain__parse_isodate;
static PyObject *const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad;
static PyObject *const_str_plain_mult;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_slice_int_pos_1_int_pos_4_none;
extern PyObject *const_str_plain_0123456789;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_d806ef4223107ee5875af23ec9037645;
static PyObject *const_str_plain__parse_tzstr;
static PyObject *const_str_plain__parse_isotime;
static PyObject *const_str_plain_parse_isotime;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_dd3f8ce78f1e9e917b041dfc99536745;
static PyObject *const_str_plain_weekno;
static PyObject *const_str_plain_week_offset;
static PyObject *const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd;
extern PyObject *const_str_plain_text_type;
static PyObject *const_str_digest_e5eecc50669fd5896ad2f4832a63eda9;
extern PyObject *const_int_pos_1;
static PyObject *const_list_int_0_int_0_int_0_int_0_none_list;
extern PyObject *const_str_plain_day;
static PyObject *const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48;
static PyObject *const_slice_int_pos_4_int_pos_5_none;
static PyObject *const_str_plain__sep;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_365;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_aa9a67aa63adedff6d108d024e656840_tuple;
static PyObject *const_str_digest_feb53e680b6c7d690400004131ece18e;
static PyObject *const_tuple_str_plain_str_in_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_bytes_chr_58;
extern PyObject *const_slice_int_pos_1_int_pos_3_none;
extern PyObject *const_str_plain_week;
extern PyObject *const_tuple_str_plain_self_str_plain_sep_tuple;
extern PyObject *const_str_plain_days;
extern PyObject *const_int_pos_7;
static PyObject *const_tuple_str_plain_self_str_plain_dt_str_tuple;
extern PyObject *const_str_plain_kwargs;
static PyObject *const_str_plain__parse_isodate_common;
extern PyObject *const_str_plain_has_location;
static PyObject *const_str_digest_4c6175688270c1bbd29a67a501516908;
static PyObject *const_bytes_digest_4a236ed6f1eb53d95b35f02be4bcef3e;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple;
extern PyObject *const_str_plain_ascii;
static PyObject *const_str_digest_4d4b9c8bbe122f377bafc611a553be57;
extern PyObject *const_str_plain_date;
static PyObject *const_slice_int_pos_3_int_pos_4_none;
extern PyObject *const_str_plain_format;
static PyObject *const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07;
extern PyObject *const_str_plain_tzoffset;
extern PyObject *const_tuple_str_plain_f_str_plain_func_tuple;
static PyObject *const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple;
static PyObject *const_str_plain_parse_tzstr;
static PyObject *const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1;
static PyObject *const_str_digest_7340a4cb5be5425958394de31cf804b1;
static PyObject *const_dict_18b4c732989d5f099ac0e782939254b0;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_dc41cce4b2abe5b79410e80649d4c406 = UNSTREAM_STRING_ASCII( &constant_bin[ 451182 ], 220, 0 );
    const_str_plain_ordinal_day = UNSTREAM_STRING_ASCII( &constant_bin[ 451402 ], 11, 1 );
    const_str_plain__calculate_weekdate = UNSTREAM_STRING_ASCII( &constant_bin[ 451413 ], 19, 1 );
    const_str_digest_9544b87982742993c0f5f3a4b895482e = UNSTREAM_STRING_ASCII( &constant_bin[ 451432 ], 18, 0 );
    const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_dt_str = UNSTREAM_STRING_ASCII( &constant_bin[ 451450 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 2, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    const_str_plain_has_sep = UNSTREAM_STRING_ASCII( &constant_bin[ 451456 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 3, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_plain_weekno = UNSTREAM_STRING_ASCII( &constant_bin[ 451463 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 5, const_str_plain_weekno ); Py_INCREF( const_str_plain_weekno );
    const_str_plain_dayno = UNSTREAM_STRING_ASCII( &constant_bin[ 451469 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 6, const_str_plain_dayno ); Py_INCREF( const_str_plain_dayno );
    const_str_plain_base_date = UNSTREAM_STRING_ASCII( &constant_bin[ 451474 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 7, const_str_plain_base_date ); Py_INCREF( const_str_plain_base_date );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 8, const_str_plain_ordinal_day ); Py_INCREF( const_str_plain_ordinal_day );
    PyTuple_SET_ITEM( const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 9, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    const_list_str_plain_isoparse_str_plain_isoparser_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_isoparse_str_plain_isoparser_list, 0, const_str_plain_isoparse ); Py_INCREF( const_str_plain_isoparse );
    PyList_SET_ITEM( const_list_str_plain_isoparse_str_plain_isoparser_list, 1, const_str_plain_isoparser ); Py_INCREF( const_str_plain_isoparser );
    const_str_plain_isocalendar = UNSTREAM_STRING_ASCII( &constant_bin[ 451483 ], 11, 1 );
    const_str_plain__FRACTION_REGEX = UNSTREAM_STRING_ASCII( &constant_bin[ 451494 ], 15, 1 );
    const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c = UNSTREAM_STRING_ASCII( &constant_bin[ 451509 ], 38, 0 );
    const_str_digest_a1e8cc94a5fb27196afc4cccac879310 = UNSTREAM_STRING_ASCII( &constant_bin[ 451547 ], 35, 0 );
    const_str_digest_eeece1440ba68c7ebd4a1a68d1035641 = UNSTREAM_STRING_ASCII( &constant_bin[ 451582 ], 222, 0 );
    const_str_plain_DEFAULT_ISOPARSER = UNSTREAM_STRING_ASCII( &constant_bin[ 451804 ], 17, 1 );
    const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c = UNSTREAM_STRING_ASCII( &constant_bin[ 451821 ], 34, 0 );
    const_str_digest_bc384ce083cb344b6bc03ca5721ca286 = UNSTREAM_STRING_ASCII( &constant_bin[ 451855 ], 18, 0 );
    const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 2, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 3, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 5, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    const_str_digest_a312668a277fce14e7c7bca251a8f70f = UNSTREAM_STRING_ASCII( &constant_bin[ 451873 ], 175, 0 );
    const_str_digest_49da3f2ec8546545939c6eaeb04542e5 = UNSTREAM_STRING_ASCII( &constant_bin[ 452048 ], 16, 0 );
    const_str_plain_week_1 = UNSTREAM_STRING_ASCII( &constant_bin[ 452064 ], 6, 1 );
    const_bytes_chr_87 = UNSTREAM_BYTES( &constant_bin[ 684 ], 1 );
    const_str_digest_3f489f137f8d33c449617a3431dc588b = UNSTREAM_STRING_ASCII( &constant_bin[ 452070 ], 33, 0 );
    const_str_plain__parse_isodate_uncommon = UNSTREAM_STRING_ASCII( &constant_bin[ 452080 ], 23, 1 );
    const_str_digest_f535bcb99a549c8dd80a10510acb23d6 = UNSTREAM_STRING_ASCII( &constant_bin[ 452103 ], 34, 0 );
    const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 1, const_str_plain_datestr ); Py_INCREF( const_str_plain_datestr );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_3b056f8bb9576af3abcbb4ddfc662cd4 = UNSTREAM_STRING_ASCII( &constant_bin[ 452137 ], 28, 0 );
    const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c = UNSTREAM_STRING_ASCII( &constant_bin[ 452165 ], 33, 0 );
    const_bytes_chr_45 = UNSTREAM_BYTES( &constant_bin[ 1 ], 1 );
    const_tuple_str_plain_isoparser_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isoparser_tuple_type_object_tuple_tuple, 0, const_str_plain_isoparser ); Py_INCREF( const_str_plain_isoparser );
    PyTuple_SET_ITEM( const_tuple_str_plain_isoparser_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 1, const_str_plain_component ); Py_INCREF( const_str_plain_component );
    const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 1, const_str_plain_year ); Py_INCREF( const_str_plain_year );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 2, const_str_plain_week ); Py_INCREF( const_str_plain_week );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 3, const_str_plain_day ); Py_INCREF( const_str_plain_day );
    const_str_plain_jan_4 = UNSTREAM_STRING_ASCII( &constant_bin[ 452198 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 4, const_str_plain_jan_4 ); Py_INCREF( const_str_plain_jan_4 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 5, const_str_plain_week_1 ); Py_INCREF( const_str_plain_week_1 );
    const_str_plain_week_offset = UNSTREAM_STRING_ASCII( &constant_bin[ 452203 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 6, const_str_plain_week_offset ); Py_INCREF( const_str_plain_week_offset );
    const_bytes_chr_90 = UNSTREAM_BYTES( &constant_bin[ 6258 ], 1 );
    const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7 = UNSTREAM_STRING_ASCII( &constant_bin[ 452214 ], 31, 0 );
    const_str_plain_str_in = UNSTREAM_STRING_ASCII( &constant_bin[ 452245 ], 6, 1 );
    const_slice_int_pos_2_int_pos_3_none = PySlice_New( const_int_pos_2, const_int_pos_3, Py_None );
    const_str_digest_273350d1d4e721d00a990e5736020868 = UNSTREAM_STRING_ASCII( &constant_bin[ 452251 ], 18, 0 );
    const_str_digest_cd54625f84514313bc3f884cd8f3dbc7 = UNSTREAM_STRING_ASCII( &constant_bin[ 452269 ], 19, 0 );
    const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 3, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c = UNSTREAM_STRING_ASCII( &constant_bin[ 452288 ], 482, 0 );
    const_str_digest_7b9c8b2f585fc922a471d79cd765fdad = UNSTREAM_STRING_ASCII( &constant_bin[ 452770 ], 31, 0 );
    const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29 = UNSTREAM_STRING_ASCII( &constant_bin[ 452801 ], 30, 0 );
    const_str_plain_parse_isodate = UNSTREAM_STRING_ASCII( &constant_bin[ 452081 ], 13, 1 );
    const_str_digest_9fd11276e9e20d1403d77c01811be30a = UNSTREAM_STRING_ASCII( &constant_bin[ 452831 ], 53, 0 );
    const_str_digest_002af61a9928cdbb7f76be79a3ec7e26 = UNSTREAM_STRING_ASCII( &constant_bin[ 452884 ], 14, 0 );
    const_str_plain__TIME_SEP = UNSTREAM_STRING_ASCII( &constant_bin[ 452898 ], 9, 1 );
    const_str_digest_ad78b016e2101d9307280b1e79d08c75 = UNSTREAM_STRING_ASCII( &constant_bin[ 452907 ], 21, 0 );
    const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 0, const_str_plain_datetime ); Py_INCREF( const_str_plain_datetime );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 1, const_str_plain_timedelta ); Py_INCREF( const_str_plain_timedelta );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 2, const_str_plain_time ); Py_INCREF( const_str_plain_time );
    PyTuple_SET_ITEM( const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple, 3, const_str_plain_date ); Py_INCREF( const_str_plain_date );
    const_tuple_bytes_digest_d541ff279fd53a8084cb698b9eda71d0_tuple = PyTuple_New( 1 );
    const_bytes_digest_d541ff279fd53a8084cb698b9eda71d0 = UNSTREAM_BYTES( &constant_bin[ 452928 ], 13 );
    PyTuple_SET_ITEM( const_tuple_bytes_digest_d541ff279fd53a8084cb698b9eda71d0_tuple, 0, const_bytes_digest_d541ff279fd53a8084cb698b9eda71d0 ); Py_INCREF( const_bytes_digest_d541ff279fd53a8084cb698b9eda71d0 );
    const_str_plain_us_str = UNSTREAM_STRING_ASCII( &constant_bin[ 452941 ], 6, 1 );
    const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25 = UNSTREAM_STRING_ASCII( &constant_bin[ 452947 ], 31, 0 );
    const_bytes_chr_122 = UNSTREAM_BYTES( &constant_bin[ 5 ], 1 );
    const_str_digest_d81e52c7ef5be9c491b182f253980414 = UNSTREAM_STRING_ASCII( &constant_bin[ 452978 ], 43, 0 );
    const_str_plain_zero_as_utc = UNSTREAM_STRING_ASCII( &constant_bin[ 453021 ], 11, 1 );
    const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5 = UNSTREAM_STRING_ASCII( &constant_bin[ 453032 ], 44, 0 );
    const_str_digest_87476696c188cfa8709a5079d606de15 = UNSTREAM_STRING_ASCII( &constant_bin[ 453076 ], 20, 0 );
    const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4 = UNSTREAM_STRING_ASCII( &constant_bin[ 453096 ], 22, 0 );
    const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 1, const_str_plain_str_in ); Py_INCREF( const_str_plain_str_in );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 3, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 5, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 6, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_ba418bb085ae97b5ed215c87204a41b8 = UNSTREAM_STRING_ASCII( &constant_bin[ 453118 ], 226, 0 );
    const_str_plain__DATE_SEP = UNSTREAM_STRING_ASCII( &constant_bin[ 453344 ], 9, 1 );
    const_str_digest_d13546195c9d971ea2eff59832fbe688 = UNSTREAM_STRING_ASCII( &constant_bin[ 453353 ], 20, 0 );
    const_str_digest_721bc1aa30b64bd3642a7350541ba875 = UNSTREAM_STRING_ASCII( &constant_bin[ 453373 ], 29, 0 );
    const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247 = UNSTREAM_STRING_ASCII( &constant_bin[ 453402 ], 18, 0 );
    const_str_plain__takes_ascii = UNSTREAM_STRING_ASCII( &constant_bin[ 453032 ], 12, 1 );
    const_list_int_pos_1_int_pos_1_int_pos_1_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyList_SET_ITEM( const_list_int_pos_1_int_pos_1_int_pos_1_list, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple, 1, const_str_plain_timestr ); Py_INCREF( const_str_plain_timestr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple, 2, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    const_str_digest_06aa45119164e8a43a0b7ab7cb1fcba7 = UNSTREAM_STRING( &constant_bin[ 453420 ], 2603, 0 );
    const_str_digest_9d79937694e45079e3b300f128025ef4 = UNSTREAM_STRING_ASCII( &constant_bin[ 451509 ], 28, 0 );
    const_bytes_chr_43 = UNSTREAM_BYTES( &constant_bin[ 6644 ], 1 );
    const_str_digest_b739213d0714b4dd82f3ec1e92951ccc = UNSTREAM_STRING_ASCII( &constant_bin[ 456023 ], 35, 0 );
    const_set_2fbb033eaf09004b738b14061b4856f6 = PySet_New( NULL );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_3 );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_5 );
    PySet_Add( const_set_2fbb033eaf09004b738b14061b4856f6, const_int_pos_6 );
    assert( PySet_Size( const_set_2fbb033eaf09004b738b14061b4856f6 ) == 3 );
    const_str_plain__parse_isodate = UNSTREAM_STRING_ASCII( &constant_bin[ 452080 ], 14, 1 );
    const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad = UNSTREAM_STRING_ASCII( &constant_bin[ 456058 ], 526, 0 );
    const_str_plain_mult = UNSTREAM_STRING_ASCII( &constant_bin[ 6148 ], 4, 1 );
    const_slice_int_pos_1_int_pos_4_none = PySlice_New( const_int_pos_1, const_int_pos_4, Py_None );
    const_str_digest_d806ef4223107ee5875af23ec9037645 = UNSTREAM_STRING_ASCII( &constant_bin[ 456584 ], 19, 0 );
    const_str_plain__parse_tzstr = UNSTREAM_STRING_ASCII( &constant_bin[ 453106 ], 12, 1 );
    const_str_plain__parse_isotime = UNSTREAM_STRING_ASCII( &constant_bin[ 452988 ], 14, 1 );
    const_str_plain_parse_isotime = UNSTREAM_STRING_ASCII( &constant_bin[ 452989 ], 13, 1 );
    const_str_digest_dd3f8ce78f1e9e917b041dfc99536745 = UNSTREAM_STRING_ASCII( &constant_bin[ 452978 ], 24, 0 );
    const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd = UNSTREAM_STRING_ASCII( &constant_bin[ 456123 ], 18, 0 );
    const_str_digest_e5eecc50669fd5896ad2f4832a63eda9 = UNSTREAM_STRING_ASCII( &constant_bin[ 456603 ], 15, 0 );
    const_list_int_0_int_0_int_0_int_0_none_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 2, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 3, const_int_0 ); Py_INCREF( const_int_0 );
    PyList_SET_ITEM( const_list_int_0_int_0_int_0_int_0_none_list, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48 = UNSTREAM_STRING_ASCII( &constant_bin[ 456618 ], 23, 0 );
    const_slice_int_pos_4_int_pos_5_none = PySlice_New( const_int_pos_4, const_int_pos_5, Py_None );
    const_str_plain__sep = UNSTREAM_STRING_ASCII( &constant_bin[ 451459 ], 4, 1 );
    const_tuple_aa9a67aa63adedff6d108d024e656840_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 1, const_str_plain_tzstr ); Py_INCREF( const_str_plain_tzstr );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 2, const_str_plain_zero_as_utc ); Py_INCREF( const_str_plain_zero_as_utc );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 3, const_str_plain_mult ); Py_INCREF( const_str_plain_mult );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 4, const_str_plain_hours ); Py_INCREF( const_str_plain_hours );
    PyTuple_SET_ITEM( const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 5, const_str_plain_minutes ); Py_INCREF( const_str_plain_minutes );
    const_str_digest_feb53e680b6c7d690400004131ece18e = UNSTREAM_STRING_ASCII( &constant_bin[ 456641 ], 23, 0 );
    const_tuple_str_plain_str_in_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_str_in_tuple, 0, const_str_plain_str_in ); Py_INCREF( const_str_plain_str_in );
    const_tuple_str_plain_self_str_plain_dt_str_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dt_str_tuple, 1, const_str_plain_dt_str ); Py_INCREF( const_str_plain_dt_str );
    const_str_plain__parse_isodate_common = UNSTREAM_STRING_ASCII( &constant_bin[ 452224 ], 21, 1 );
    const_str_digest_4c6175688270c1bbd29a67a501516908 = UNSTREAM_STRING_ASCII( &constant_bin[ 452070 ], 24, 0 );
    const_bytes_digest_4a236ed6f1eb53d95b35f02be4bcef3e = UNSTREAM_BYTES( &constant_bin[ 456664 ], 4 );
    const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 1, const_str_plain_tzstr ); Py_INCREF( const_str_plain_tzstr );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 2, const_str_plain_zero_as_utc ); Py_INCREF( const_str_plain_zero_as_utc );
    const_str_digest_4d4b9c8bbe122f377bafc611a553be57 = UNSTREAM_STRING_ASCII( &constant_bin[ 456668 ], 55, 0 );
    const_slice_int_pos_3_int_pos_4_none = PySlice_New( const_int_pos_3, const_int_pos_4, Py_None );
    const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07 = UNSTREAM_STRING_ASCII( &constant_bin[ 456723 ], 48, 0 );
    const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 1, const_str_plain_timestr ); Py_INCREF( const_str_plain_timestr );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 2, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 3, const_str_plain_components ); Py_INCREF( const_str_plain_components );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 5, const_str_plain_comp ); Py_INCREF( const_str_plain_comp );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 6, const_str_plain_has_sep ); Py_INCREF( const_str_plain_has_sep );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 7, const_str_plain_frac ); Py_INCREF( const_str_plain_frac );
    PyTuple_SET_ITEM( const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 8, const_str_plain_us_str ); Py_INCREF( const_str_plain_us_str );
    const_str_plain_parse_tzstr = UNSTREAM_STRING_ASCII( &constant_bin[ 452917 ], 11, 1 );
    const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1 = UNSTREAM_STRING_ASCII( &constant_bin[ 451829 ], 25, 0 );
    const_str_digest_7340a4cb5be5425958394de31cf804b1 = UNSTREAM_STRING_ASCII( &constant_bin[ 453032 ], 26, 0 );
    const_dict_18b4c732989d5f099ac0e782939254b0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_18b4c732989d5f099ac0e782939254b0, const_str_plain_days, const_int_pos_1 );
    assert( PyDict_Size( const_dict_18b4c732989d5f099ac0e782939254b0 ) == 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dateutil$parser$isoparser( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_3ce73f0d3f758070ab66d21bbcbb81c0;
static PyCodeObject *codeobj_c0f31117b72c9b5ea002127e6e3c03b5;
static PyCodeObject *codeobj_beb956c0bb7554c8cbfa49f8f4c03f46;
static PyCodeObject *codeobj_9a138f868baebad412dba7c3c4c3c838;
static PyCodeObject *codeobj_74c03a41851e0745cdc60a0f10fa52e2;
static PyCodeObject *codeobj_8a3a25210fd91f989612ab2afd36187c;
static PyCodeObject *codeobj_0a38dd885073829beb4cc0c37ba9c085;
static PyCodeObject *codeobj_f142867eff0bfe660b0f97f60c569970;
static PyCodeObject *codeobj_57b4ce912831cdd9f761e3fb930e508b;
static PyCodeObject *codeobj_1fe6dcc91b96e1d9e6cc171b5c7dd2b3;
static PyCodeObject *codeobj_e3bf4d43defdd7309d4a1012824404e9;
static PyCodeObject *codeobj_5becb2cd02d6954800f538df406aa000;
static PyCodeObject *codeobj_7a8bcad4194e893791ace716283ca340;
static PyCodeObject *codeobj_f7c82930034b34111c6807cb41f4bc1d;
static PyCodeObject *codeobj_adc79be43a8dc84e4e87ce096bcb8ac5;
static PyCodeObject *codeobj_8622382fc9ec7e994e54e0b54e5257b7;
static PyCodeObject *codeobj_3b3ce94ed6837ab91ad03a274880b078;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_3b056f8bb9576af3abcbb4ddfc662cd4 );
    codeobj_3ce73f0d3f758070ab66d21bbcbb81c0 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 373, const_tuple_03a0ae10fe3d02d4eee784859233b621_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c0f31117b72c9b5ea002127e6e3c03b5 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 26, const_tuple_str_plain_str_in_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_beb956c0bb7554c8cbfa49f8f4c03f46 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_addf88fff40d9b7c255c6c48e7c39e5c, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_9a138f868baebad412dba7c3c4c3c838 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 43, const_tuple_str_plain_self_str_plain_sep_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_74c03a41851e0745cdc60a0f10fa52e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__calculate_weekdate, 297, const_tuple_4ff5b1116cbfdea5c77a3f43634b9509_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8a3a25210fd91f989612ab2afd36187c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate, 206, const_tuple_str_plain_self_str_plain_dt_str_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0a38dd885073829beb4cc0c37ba9c085 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate_common, 212, const_tuple_799f5699f32699d708aadd6d7e7b093d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f142867eff0bfe660b0f97f60c569970 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isodate_uncommon, 253, const_tuple_21c998153d67f1ff8e7ec56e2bbc3f4a_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_57b4ce912831cdd9f761e3fb930e508b = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_isotime, 330, const_tuple_39f79e72345b55cef5cb43207dfaaf58_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__parse_tzstr, 378, const_tuple_aa9a67aa63adedff6d108d024e656840_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e3bf4d43defdd7309d4a1012824404e9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__takes_ascii, 22, const_tuple_str_plain_f_str_plain_func_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5becb2cd02d6954800f538df406aa000 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_func, 23, const_tuple_e3358f65651f30f16ff18edc5839d22d_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS );
    codeobj_7a8bcad4194e893791ace716283ca340 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isoparse, 59, const_tuple_789c4e054e46e08a6b3fff87c4f9c002_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f7c82930034b34111c6807cb41f4bc1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_isoparser, 42, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_adc79be43a8dc84e4e87ce096bcb8ac5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_isodate, 148, const_tuple_55fd1882f0980085a6b98526ad7863a4_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8622382fc9ec7e994e54e0b54e5257b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_isotime, 165, const_tuple_str_plain_self_str_plain_timestr_str_plain_components_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3b3ce94ed6837ab91ad03a274880b078 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_parse_tzstr, 181, const_tuple_str_plain_self_str_plain_tzstr_str_plain_zero_as_utc_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( PyObject *defaults );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  );


static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  );


// The module function definitions.
static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_f = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_func = NULL;
    struct Nuitka_FrameObject *frame_e3bf4d43defdd7309d4a1012824404e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3bf4d43defdd7309d4a1012824404e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e3bf4d43defdd7309d4a1012824404e9, codeobj_e3bf4d43defdd7309d4a1012824404e9, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_e3bf4d43defdd7309d4a1012824404e9 = cache_frame_e3bf4d43defdd7309d4a1012824404e9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e3bf4d43defdd7309d4a1012824404e9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e3bf4d43defdd7309d4a1012824404e9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_wraps );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wraps );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wraps" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 23;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_f ) );
        tmp_args_element_name_1 = PyCell_GET( par_f );
        frame_e3bf4d43defdd7309d4a1012824404e9->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_2 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func(  );

        ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] = par_f;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] );


        frame_e3bf4d43defdd7309d4a1012824404e9->m_frame.f_lineno = 23;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert( var_func == NULL );
        var_func = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3bf4d43defdd7309d4a1012824404e9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e3bf4d43defdd7309d4a1012824404e9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e3bf4d43defdd7309d4a1012824404e9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e3bf4d43defdd7309d4a1012824404e9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e3bf4d43defdd7309d4a1012824404e9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e3bf4d43defdd7309d4a1012824404e9,
        type_description_1,
        par_f,
        var_func
    );


    // Release cached frame.
    if ( frame_e3bf4d43defdd7309d4a1012824404e9 == cache_frame_e3bf4d43defdd7309d4a1012824404e9 )
    {
        Py_DECREF( frame_e3bf4d43defdd7309d4a1012824404e9 );
    }
    cache_frame_e3bf4d43defdd7309d4a1012824404e9 = NULL;

    assertFrameObject( frame_e3bf4d43defdd7309d4a1012824404e9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_func );
    tmp_return_value = var_func;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_CellObject *par_str_in = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_args = python_pars[ 2 ];
    PyObject *par_kwargs = python_pars[ 3 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_5becb2cd02d6954800f538df406aa000;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5becb2cd02d6954800f538df406aa000 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5becb2cd02d6954800f538df406aa000, codeobj_5becb2cd02d6954800f538df406aa000, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5becb2cd02d6954800f538df406aa000 = cache_frame_5becb2cd02d6954800f538df406aa000;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5becb2cd02d6954800f538df406aa000 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5becb2cd02d6954800f538df406aa000 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( PyCell_GET( par_str_in ) );
        tmp_getattr_target_1 = PyCell_GET( par_str_in );
        tmp_getattr_attr_1 = const_str_plain_read;
        tmp_getattr_default_1 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_getattr_default_1)->m_closure[0] = par_str_in;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_getattr_default_1)->m_closure[0] );


        tmp_called_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        Py_DECREF( tmp_getattr_default_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }
        frame_5becb2cd02d6954800f538df406aa000->m_frame.f_lineno = 26;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = PyCell_GET( par_str_in );
            PyCell_SET( par_str_in, tmp_assign_source_1 );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( PyCell_GET( par_str_in ) );
        tmp_isinstance_inst_1 = PyCell_GET( par_str_in );
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 29;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;
            type_description_1 = "ocoooNc";
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
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( PyCell_GET( par_str_in ) );
            tmp_called_instance_1 = PyCell_GET( par_str_in );
            frame_5becb2cd02d6954800f538df406aa000->m_frame.f_lineno = 32;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 32;
                type_description_1 = "ocoooNc";
                goto try_except_handler_2;
            }
            {
                PyObject *old = PyCell_GET( par_str_in );
                PyCell_SET( par_str_in, tmp_assign_source_2 );
                Py_XDECREF( old );
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
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5becb2cd02d6954800f538df406aa000, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5becb2cd02d6954800f538df406aa000, exception_keeper_lineno_1 );
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
            tmp_compexpr_right_1 = PyExc_UnicodeEncodeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 33;
                type_description_1 = "ocoooNc";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_3 );
                var_e = tmp_assign_source_3;
            }
            // Tried code:
            {
                PyObject *tmp_called_name_2;
                PyObject *tmp_source_name_2;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_args_element_name_2;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six );

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

                    exception_lineno = 35;
                    type_description_1 = "ocoooNc";
                    goto try_except_handler_4;
                }

                tmp_source_name_2 = tmp_mvar_value_2;
                tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_raise_from );
                if ( tmp_called_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;
                    type_description_1 = "ocoooNc";
                    goto try_except_handler_4;
                }
                tmp_make_exception_arg_1 = const_str_digest_9fd11276e9e20d1403d77c01811be30a;
                frame_5becb2cd02d6954800f538df406aa000->m_frame.f_lineno = 35;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_args_element_name_1 == NULL) );
                CHECK_OBJECT( var_e );
                tmp_args_element_name_2 = var_e;
                frame_5becb2cd02d6954800f538df406aa000->m_frame.f_lineno = 35;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                    tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_called_name_2 );
                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 35;
                    type_description_1 = "ocoooNc";
                    goto try_except_handler_4;
                }
                Py_DECREF( tmp_call_result_1 );
            }
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

            Py_XDECREF( var_e );
            var_e = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto try_except_handler_3;
            // End of try:
            try_end_2:;
            Py_XDECREF( var_e );
            var_e = NULL;

            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 31;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_5becb2cd02d6954800f538df406aa000->m_frame) frame_5becb2cd02d6954800f538df406aa000->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ocoooNc";
            goto try_except_handler_3;
            branch_end_2:;
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
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
        return NULL;
        // End of try:
        try_end_1:;
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "f" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[0] );
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        if ( PyCell_GET( par_str_in ) == NULL )
        {
            Py_DECREF( tmp_dircall_arg2_1 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "str_in" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 37;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = PyCell_GET( par_str_in );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
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


            exception_lineno = 37;
            type_description_1 = "ocoooNc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5becb2cd02d6954800f538df406aa000 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5becb2cd02d6954800f538df406aa000 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5becb2cd02d6954800f538df406aa000 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5becb2cd02d6954800f538df406aa000, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5becb2cd02d6954800f538df406aa000->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5becb2cd02d6954800f538df406aa000, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5becb2cd02d6954800f538df406aa000,
        type_description_1,
        par_self,
        par_str_in,
        par_args,
        par_kwargs,
        var_e,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_5becb2cd02d6954800f538df406aa000 == cache_frame_5becb2cd02d6954800f538df406aa000 )
    {
        Py_DECREF( frame_5becb2cd02d6954800f538df406aa000 );
    }
    cache_frame_5becb2cd02d6954800f538df406aa000 = NULL;

    assertFrameObject( frame_5becb2cd02d6954800f538df406aa000 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_str_in );
    Py_DECREF( par_str_in );
    par_str_in = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

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

    CHECK_OBJECT( (PyObject *)par_str_in );
    Py_DECREF( par_str_in );
    par_str_in = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_c0f31117b72c9b5ea002127e6e3c03b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c0f31117b72c9b5ea002127e6e3c03b5 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_c0f31117b72c9b5ea002127e6e3c03b5, codeobj_c0f31117b72c9b5ea002127e6e3c03b5, module_dateutil$parser$isoparser, sizeof(void *) );
    frame_c0f31117b72c9b5ea002127e6e3c03b5 = cache_frame_c0f31117b72c9b5ea002127e6e3c03b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c0f31117b72c9b5ea002127e6e3c03b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c0f31117b72c9b5ea002127e6e3c03b5 ) == 2 ); // Frame stack

    // Framed code:
    if ( PyCell_GET( self->m_closure[0] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "str_in" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[0] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0f31117b72c9b5ea002127e6e3c03b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0f31117b72c9b5ea002127e6e3c03b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c0f31117b72c9b5ea002127e6e3c03b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c0f31117b72c9b5ea002127e6e3c03b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c0f31117b72c9b5ea002127e6e3c03b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c0f31117b72c9b5ea002127e6e3c03b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c0f31117b72c9b5ea002127e6e3c03b5,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_c0f31117b72c9b5ea002127e6e3c03b5 == cache_frame_c0f31117b72c9b5ea002127e6e3c03b5 )
    {
        Py_DECREF( frame_c0f31117b72c9b5ea002127e6e3c03b5 );
    }
    cache_frame_c0f31117b72c9b5ea002127e6e3c03b5 = NULL;

    assertFrameObject( frame_c0f31117b72c9b5ea002127e6e3c03b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sep = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_9a138f868baebad412dba7c3c4c3c838;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9a138f868baebad412dba7c3c4c3c838 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9a138f868baebad412dba7c3c4c3c838, codeobj_9a138f868baebad412dba7c3c4c3c838, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_9a138f868baebad412dba7c3c4c3c838 = cache_frame_9a138f868baebad412dba7c3c4c3c838;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a138f868baebad412dba7c3c4c3c838 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a138f868baebad412dba7c3c4c3c838 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_sep );
        tmp_compexpr_left_1 = par_sep;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_len_arg_1;
            int tmp_or_left_truth_2;
            nuitka_bool tmp_or_left_value_2;
            nuitka_bool tmp_or_right_value_2;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_ord_arg_1;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( par_sep );
            tmp_len_arg_1 = par_sep;
            tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
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
            CHECK_OBJECT( par_sep );
            tmp_ord_arg_1 = par_sep;
            tmp_compexpr_left_3 = BUILTIN_ORD( tmp_ord_arg_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = const_int_pos_128;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_left_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
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
            CHECK_OBJECT( par_sep );
            tmp_compexpr_left_4 = par_sep;
            tmp_compexpr_right_4 = const_str_plain_0123456789;
            tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 51;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_right_value_1 = tmp_or_right_value_2;
            goto or_end_2;
            or_left_2:;
            tmp_or_right_value_1 = tmp_or_left_value_2;
            or_end_2:;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_4d4b9c8bbe122f377bafc611a553be57;
                frame_9a138f868baebad412dba7c3c4c3c838->m_frame.f_lineno = 52;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 52;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_sep );
            tmp_called_instance_1 = par_sep;
            frame_9a138f868baebad412dba7c3c4c3c838->m_frame.f_lineno = 55;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 55;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_sep;
                assert( old != NULL );
                par_sep = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_sep );
        tmp_assattr_name_1 = par_sep;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__sep, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a138f868baebad412dba7c3c4c3c838 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a138f868baebad412dba7c3c4c3c838 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a138f868baebad412dba7c3c4c3c838, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a138f868baebad412dba7c3c4c3c838->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a138f868baebad412dba7c3c4c3c838, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a138f868baebad412dba7c3c4c3c838,
        type_description_1,
        par_self,
        par_sep
    );


    // Release cached frame.
    if ( frame_9a138f868baebad412dba7c3c4c3c838 == cache_frame_9a138f868baebad412dba7c3c4c3c838 )
    {
        Py_DECREF( frame_9a138f868baebad412dba7c3c4c3c838 );
    }
    cache_frame_9a138f868baebad412dba7c3c4c3c838 = NULL;

    assertFrameObject( frame_9a138f868baebad412dba7c3c4c3c838 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sep );
    Py_DECREF( par_sep );
    par_sep = NULL;

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

    Py_XDECREF( par_sep );
    par_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_2___init__ );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_3_isoparse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_7a8bcad4194e893791ace716283ca340;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7a8bcad4194e893791ace716283ca340 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a8bcad4194e893791ace716283ca340, codeobj_7a8bcad4194e893791ace716283ca340, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7a8bcad4194e893791ace716283ca340 = cache_frame_7a8bcad4194e893791ace716283ca340;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a8bcad4194e893791ace716283ca340 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a8bcad4194e893791ace716283ca340 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_dt_str );
        tmp_args_element_name_1 = par_dt_str;
        frame_7a8bcad4194e893791ace716283ca340->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__parse_isodate, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 134;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 134;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 134;
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

            type_description_1 = "oooo";
            exception_lineno = 134;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_components == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_components = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_pos == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pos = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_dt_str );
        tmp_len_arg_1 = par_dt_str;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_pos );
        tmp_compexpr_right_1 = var_pos;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooo";
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_start_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_step_name_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__sep );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = Py_None;
            tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_2 );
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
            CHECK_OBJECT( par_dt_str );
            tmp_subscribed_name_1 = par_dt_str;
            CHECK_OBJECT( var_pos );
            tmp_start_name_1 = var_pos;
            CHECK_OBJECT( var_pos );
            tmp_left_name_1 = var_pos;
            tmp_right_name_1 = const_int_pos_1;
            tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_stop_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            Py_DECREF( tmp_stop_name_1 );
            assert( !(tmp_subscript_name_1 == NULL) );
            tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscript_name_1 );
            if ( tmp_compexpr_left_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 137;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__sep );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_3 );

                exception_lineno = 137;
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


                exception_lineno = 137;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
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
                PyObject *tmp_assign_source_6;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                PyObject *tmp_called_name_1;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_2;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_start_name_2;
                PyObject *tmp_left_name_3;
                PyObject *tmp_right_name_3;
                PyObject *tmp_stop_name_2;
                PyObject *tmp_step_name_2;
                CHECK_OBJECT( var_components );
                tmp_left_name_2 = var_components;
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__parse_isotime );
                if ( tmp_called_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_dt_str );
                tmp_subscribed_name_2 = par_dt_str;
                CHECK_OBJECT( var_pos );
                tmp_left_name_3 = var_pos;
                tmp_right_name_3 = const_int_pos_1;
                tmp_start_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
                if ( tmp_start_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 138;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_stop_name_2 = Py_None;
                tmp_step_name_2 = Py_None;
                tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
                Py_DECREF( tmp_start_name_2 );
                assert( !(tmp_subscript_name_2 == NULL) );
                tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
                Py_DECREF( tmp_subscript_name_2 );
                if ( tmp_args_element_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_1 );

                    exception_lineno = 138;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_7a8bcad4194e893791ace716283ca340->m_frame.f_lineno = 138;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );
                if ( tmp_right_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
                Py_DECREF( tmp_right_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 138;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_6 = tmp_left_name_2;
                var_components = tmp_assign_source_6;

            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                tmp_make_exception_arg_1 = const_str_digest_ae8781db72c94bbcaea4d4cc6cfb811c;
                frame_7a8bcad4194e893791ace716283ca340->m_frame.f_lineno = 140;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 140;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        if ( var_components == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = var_components;
        tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        assert( !(tmp_res == -1) );
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
        if ( var_components == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_3 = var_components;
        tmp_subscript_name_3 = const_int_pos_3;
        tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 3 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_24;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 142;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            tmp_ass_subvalue_1 = const_int_0;
            if ( var_components == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 143;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_1 = var_components;
            tmp_ass_subscript_1 = const_int_pos_3;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 3, tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 143;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_left_name_4;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_right_name_4;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_kw_name_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_datetime );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg1_1 = tmp_mvar_value_1;
            if ( var_components == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_dircall_arg2_1 = var_components;
            Py_INCREF( tmp_dircall_arg1_1 );
            Py_INCREF( tmp_dircall_arg2_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
                tmp_left_name_4 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
            }
            if ( tmp_left_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_left_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            tmp_kw_name_1 = PyDict_Copy( const_dict_18b4c732989d5f099ac0e782939254b0 );
            frame_7a8bcad4194e893791ace716283ca340->m_frame.f_lineno = 144;
            tmp_right_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_4 );

                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_4, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_4 );
            Py_DECREF( tmp_right_name_4 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 144;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_dircall_arg2_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "datetime" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = tmp_mvar_value_3;
        if ( var_components == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "components" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_2 = var_components;
        Py_INCREF( tmp_dircall_arg1_2 );
        Py_INCREF( tmp_dircall_arg2_2 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a8bcad4194e893791ace716283ca340 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a8bcad4194e893791ace716283ca340 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a8bcad4194e893791ace716283ca340 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a8bcad4194e893791ace716283ca340, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a8bcad4194e893791ace716283ca340->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a8bcad4194e893791ace716283ca340, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a8bcad4194e893791ace716283ca340,
        type_description_1,
        par_self,
        par_dt_str,
        var_components,
        var_pos
    );


    // Release cached frame.
    if ( frame_7a8bcad4194e893791ace716283ca340 == cache_frame_7a8bcad4194e893791ace716283ca340 )
    {
        Py_DECREF( frame_7a8bcad4194e893791ace716283ca340 );
    }
    cache_frame_7a8bcad4194e893791ace716283ca340 = NULL;

    assertFrameObject( frame_7a8bcad4194e893791ace716283ca340 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_3_isoparse );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    CHECK_OBJECT( (PyObject *)var_pos );
    Py_DECREF( var_pos );
    var_pos = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_3_isoparse );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_4_parse_isodate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_datestr = python_pars[ 1 ];
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_adc79be43a8dc84e4e87ce096bcb8ac5;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_adc79be43a8dc84e4e87ce096bcb8ac5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_adc79be43a8dc84e4e87ce096bcb8ac5, codeobj_adc79be43a8dc84e4e87ce096bcb8ac5, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_adc79be43a8dc84e4e87ce096bcb8ac5 = cache_frame_adc79be43a8dc84e4e87ce096bcb8ac5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_adc79be43a8dc84e4e87ce096bcb8ac5 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_datestr );
        tmp_args_element_name_1 = par_datestr;
        frame_adc79be43a8dc84e4e87ce096bcb8ac5->m_frame.f_lineno = 159;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__parse_isodate, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "oooo";
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
        tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 159;
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
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
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


            type_description_1 = "oooo";
            exception_lineno = 159;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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
                    exception_lineno = 159;
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

            type_description_1 = "oooo";
            exception_lineno = 159;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert( var_components == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_components = tmp_assign_source_4;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert( var_pos == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_pos = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_pos );
        tmp_compexpr_left_1 = var_pos;
        CHECK_OBJECT( par_datestr );
        tmp_len_arg_1 = par_datestr;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "oooo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_left_name_1 = const_str_digest_9d79937694e45079e3b300f128025ef4;
            tmp_called_instance_2 = const_str_digest_002af61a9928cdbb7f76be79a3ec7e26;
            CHECK_OBJECT( par_datestr );
            tmp_args_element_name_2 = par_datestr;
            frame_adc79be43a8dc84e4e87ce096bcb8ac5->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 161;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_adc79be43a8dc84e4e87ce096bcb8ac5->m_frame.f_lineno = 161;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 161;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_components );
        tmp_dircall_arg2_1 = var_components;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_adc79be43a8dc84e4e87ce096bcb8ac5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_adc79be43a8dc84e4e87ce096bcb8ac5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_adc79be43a8dc84e4e87ce096bcb8ac5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_adc79be43a8dc84e4e87ce096bcb8ac5,
        type_description_1,
        par_self,
        par_datestr,
        var_components,
        var_pos
    );


    // Release cached frame.
    if ( frame_adc79be43a8dc84e4e87ce096bcb8ac5 == cache_frame_adc79be43a8dc84e4e87ce096bcb8ac5 )
    {
        Py_DECREF( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );
    }
    cache_frame_adc79be43a8dc84e4e87ce096bcb8ac5 = NULL;

    assertFrameObject( frame_adc79be43a8dc84e4e87ce096bcb8ac5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_4_parse_isodate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_datestr );
    Py_DECREF( par_datestr );
    par_datestr = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    CHECK_OBJECT( (PyObject *)var_pos );
    Py_DECREF( var_pos );
    var_pos = NULL;

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

    CHECK_OBJECT( (PyObject *)par_datestr );
    Py_DECREF( par_datestr );
    par_datestr = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_4_parse_isodate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_5_parse_isotime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timestr = python_pars[ 1 ];
    PyObject *var_components = NULL;
    struct Nuitka_FrameObject *frame_8622382fc9ec7e994e54e0b54e5257b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8622382fc9ec7e994e54e0b54e5257b7 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8622382fc9ec7e994e54e0b54e5257b7, codeobj_8622382fc9ec7e994e54e0b54e5257b7, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8622382fc9ec7e994e54e0b54e5257b7 = cache_frame_8622382fc9ec7e994e54e0b54e5257b7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8622382fc9ec7e994e54e0b54e5257b7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8622382fc9ec7e994e54e0b54e5257b7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_timestr );
        tmp_args_element_name_1 = par_timestr;
        frame_8622382fc9ec7e994e54e0b54e5257b7->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__parse_isotime, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_components == NULL );
        var_components = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( var_components );
        tmp_subscribed_name_1 = var_components;
        tmp_subscript_name_1 = const_int_0;
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_24;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            tmp_ass_subvalue_1 = const_int_0;
            CHECK_OBJECT( var_components );
            tmp_ass_subscribed_1 = var_components;
            tmp_ass_subscript_1 = const_int_0;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_time );

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

            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( var_components );
        tmp_dircall_arg2_1 = var_components;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8622382fc9ec7e994e54e0b54e5257b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8622382fc9ec7e994e54e0b54e5257b7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8622382fc9ec7e994e54e0b54e5257b7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8622382fc9ec7e994e54e0b54e5257b7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8622382fc9ec7e994e54e0b54e5257b7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8622382fc9ec7e994e54e0b54e5257b7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8622382fc9ec7e994e54e0b54e5257b7,
        type_description_1,
        par_self,
        par_timestr,
        var_components
    );


    // Release cached frame.
    if ( frame_8622382fc9ec7e994e54e0b54e5257b7 == cache_frame_8622382fc9ec7e994e54e0b54e5257b7 )
    {
        Py_DECREF( frame_8622382fc9ec7e994e54e0b54e5257b7 );
    }
    cache_frame_8622382fc9ec7e994e54e0b54e5257b7 = NULL;

    assertFrameObject( frame_8622382fc9ec7e994e54e0b54e5257b7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_5_parse_isotime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timestr );
    Py_DECREF( par_timestr );
    par_timestr = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timestr );
    Py_DECREF( par_timestr );
    par_timestr = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_5_parse_isotime );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_6_parse_tzstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tzstr = python_pars[ 1 ];
    PyObject *par_zero_as_utc = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_3b3ce94ed6837ab91ad03a274880b078;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_3b3ce94ed6837ab91ad03a274880b078 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3b3ce94ed6837ab91ad03a274880b078, codeobj_3b3ce94ed6837ab91ad03a274880b078, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3b3ce94ed6837ab91ad03a274880b078 = cache_frame_3b3ce94ed6837ab91ad03a274880b078;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3b3ce94ed6837ab91ad03a274880b078 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3b3ce94ed6837ab91ad03a274880b078 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__parse_tzstr );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_tzstr );
        tmp_tuple_element_1 = par_tzstr;
        tmp_args_name_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_zero_as_utc;
        CHECK_OBJECT( par_zero_as_utc );
        tmp_dict_value_1 = par_zero_as_utc;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_3b3ce94ed6837ab91ad03a274880b078->m_frame.f_lineno = 199;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b3ce94ed6837ab91ad03a274880b078 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b3ce94ed6837ab91ad03a274880b078 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3b3ce94ed6837ab91ad03a274880b078 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3b3ce94ed6837ab91ad03a274880b078, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3b3ce94ed6837ab91ad03a274880b078->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3b3ce94ed6837ab91ad03a274880b078, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3b3ce94ed6837ab91ad03a274880b078,
        type_description_1,
        par_self,
        par_tzstr,
        par_zero_as_utc
    );


    // Release cached frame.
    if ( frame_3b3ce94ed6837ab91ad03a274880b078 == cache_frame_3b3ce94ed6837ab91ad03a274880b078 )
    {
        Py_DECREF( frame_3b3ce94ed6837ab91ad03a274880b078 );
    }
    cache_frame_3b3ce94ed6837ab91ad03a274880b078 = NULL;

    assertFrameObject( frame_3b3ce94ed6837ab91ad03a274880b078 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_6_parse_tzstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tzstr );
    Py_DECREF( par_tzstr );
    par_tzstr = NULL;

    CHECK_OBJECT( (PyObject *)par_zero_as_utc );
    Py_DECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tzstr );
    Py_DECREF( par_tzstr );
    par_tzstr = NULL;

    CHECK_OBJECT( (PyObject *)par_zero_as_utc );
    Py_DECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_6_parse_tzstr );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_7__parse_isodate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_8a3a25210fd91f989612ab2afd36187c;
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
    static struct Nuitka_FrameObject *cache_frame_8a3a25210fd91f989612ab2afd36187c = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8a3a25210fd91f989612ab2afd36187c, codeobj_8a3a25210fd91f989612ab2afd36187c, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
    frame_8a3a25210fd91f989612ab2afd36187c = cache_frame_8a3a25210fd91f989612ab2afd36187c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8a3a25210fd91f989612ab2afd36187c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8a3a25210fd91f989612ab2afd36187c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_dt_str );
        tmp_args_element_name_1 = par_dt_str;
        frame_8a3a25210fd91f989612ab2afd36187c->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain__parse_isodate_common, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
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
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_8a3a25210fd91f989612ab2afd36187c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_8a3a25210fd91f989612ab2afd36187c, exception_keeper_lineno_1 );
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
        tmp_compexpr_right_1 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 209;
            type_description_1 = "oo";
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            CHECK_OBJECT( par_dt_str );
            tmp_args_element_name_2 = par_dt_str;
            frame_8a3a25210fd91f989612ab2afd36187c->m_frame.f_lineno = 210;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__parse_isodate_uncommon, call_args );
            }

            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 210;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 207;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_8a3a25210fd91f989612ab2afd36187c->m_frame) frame_8a3a25210fd91f989612ab2afd36187c->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto try_except_handler_3;
        branch_end_1:;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
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
    RESTORE_FRAME_EXCEPTION( frame_8a3a25210fd91f989612ab2afd36187c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a3a25210fd91f989612ab2afd36187c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8a3a25210fd91f989612ab2afd36187c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8a3a25210fd91f989612ab2afd36187c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8a3a25210fd91f989612ab2afd36187c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8a3a25210fd91f989612ab2afd36187c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8a3a25210fd91f989612ab2afd36187c,
        type_description_1,
        par_self,
        par_dt_str
    );


    // Release cached frame.
    if ( frame_8a3a25210fd91f989612ab2afd36187c == cache_frame_8a3a25210fd91f989612ab2afd36187c )
    {
        Py_DECREF( frame_8a3a25210fd91f989612ab2afd36187c );
    }
    cache_frame_8a3a25210fd91f989612ab2afd36187c = NULL;

    assertFrameObject( frame_8a3a25210fd91f989612ab2afd36187c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_7__parse_isodate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_8__parse_isodate_common( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_len_str = NULL;
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_has_sep = NULL;
    struct Nuitka_FrameObject *frame_0a38dd885073829beb4cc0c37ba9c085;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_0a38dd885073829beb4cc0c37ba9c085 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0a38dd885073829beb4cc0c37ba9c085, codeobj_0a38dd885073829beb4cc0c37ba9c085, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0a38dd885073829beb4cc0c37ba9c085 = cache_frame_0a38dd885073829beb4cc0c37ba9c085;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0a38dd885073829beb4cc0c37ba9c085 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0a38dd885073829beb4cc0c37ba9c085 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_dt_str );
        tmp_len_arg_1 = par_dt_str;
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_len_str == NULL );
        var_len_str = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = LIST_COPY( const_list_int_pos_1_int_pos_1_int_pos_1_list );
        assert( var_components == NULL );
        var_components = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_left_1 = var_len_str;
        tmp_compexpr_right_1 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d13546195c9d971ea2eff59832fbe688;
            frame_0a38dd885073829beb4cc0c37ba9c085->m_frame.f_lineno = 217;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 217;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        int tmp_ass_subscript_res_1;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_1 = par_dt_str;
        tmp_subscript_name_1 = const_slice_int_0_int_pos_4_none;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_components );
        tmp_ass_subscribed_1 = var_components;
        tmp_ass_subscript_1 = const_int_0;
        tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_ass_subscript_res_1 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_pos_4;
        assert( var_pos == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_pos = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = const_int_pos_4;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_right_2 = var_len_str;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT( var_components );
            tmp_tuple_element_1 = var_components;
            tmp_return_value = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
            tmp_tuple_element_1 = const_int_pos_4;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_2 = par_dt_str;
        tmp_subscript_name_2 = const_slice_int_pos_4_int_pos_5_none;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__DATE_SEP );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 225;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_has_sep == NULL );
        var_has_sep = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_has_sep );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_has_sep );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 226;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
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
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = const_int_pos_5;
            {
                PyObject *old = var_pos;
                assert( old != NULL );
                var_pos = tmp_assign_source_5;
                Py_INCREF( var_pos );
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_len_str );
        tmp_left_name_1 = var_len_str;
        CHECK_OBJECT( var_pos );
        tmp_right_name_1 = var_pos;
        tmp_compexpr_left_4 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_1, tmp_right_name_1 );
        assert( !(tmp_compexpr_left_4 == NULL) );
        tmp_compexpr_right_4 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        assert( !(tmp_res == -1) );
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_87476696c188cfa8709a5079d606de15;
            frame_0a38dd885073829beb4cc0c37ba9c085->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 231;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        int tmp_ass_subscript_res_2;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_3 = par_dt_str;
        CHECK_OBJECT( var_pos );
        tmp_start_name_1 = var_pos;
        CHECK_OBJECT( var_pos );
        tmp_left_name_2 = var_pos;
        tmp_right_name_2 = const_int_pos_2;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_LONG_LONG( tmp_left_name_2, tmp_right_name_2 );
        assert( !(tmp_stop_name_1 == NULL) );
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_int_arg_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = PyNumber_Int( tmp_int_arg_2 );
        Py_DECREF( tmp_int_arg_2 );
        if ( tmp_ass_subvalue_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_components );
        tmp_ass_subscribed_2 = var_components;
        tmp_ass_subscript_2 = const_int_pos_1;
        tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
        Py_DECREF( tmp_ass_subvalue_2 );
        if ( tmp_ass_subscript_res_2 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 233;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        CHECK_OBJECT( var_pos );
        tmp_left_name_3 = var_pos;
        tmp_right_name_3 = const_int_pos_2;
        tmp_result = BINARY_OPERATION_ADD_LONG_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 234;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_3;
        var_pos = tmp_assign_source_6;

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( var_pos );
        tmp_compexpr_left_5 = var_pos;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_right_5 = var_len_str;
        tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
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
            nuitka_bool tmp_condition_result_6;
            int tmp_truth_name_2;
            CHECK_OBJECT( var_has_sep );
            tmp_truth_name_2 = CHECK_IF_TRUE( var_has_sep );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_6 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( var_components );
                tmp_tuple_element_2 = var_components;
                tmp_return_value = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_pos );
                tmp_tuple_element_2 = var_pos;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
                goto frame_return_exit_1;
            }
            goto branch_end_6;
            branch_no_6:;
            {
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_6d4840b3420c33d1b6b9b6e5fcbbc247;
                frame_0a38dd885073829beb4cc0c37ba9c085->m_frame.f_lineno = 240;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 240;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_end_6:;
        }
        branch_no_5:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_has_sep );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_has_sep );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_step_name_2;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_dt_str );
            tmp_subscribed_name_4 = par_dt_str;
            CHECK_OBJECT( var_pos );
            tmp_start_name_2 = var_pos;
            CHECK_OBJECT( var_pos );
            tmp_left_name_4 = var_pos;
            tmp_right_name_4 = const_int_pos_1;
            tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_stop_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_stop_name_2 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__DATE_SEP );
            if ( tmp_compexpr_right_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_6 );

                exception_lineno = 243;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            Py_DECREF( tmp_compexpr_right_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                tmp_make_exception_arg_4 = const_str_digest_7ee3aedf01ede174a1f8bd532fd5ea25;
                frame_0a38dd885073829beb4cc0c37ba9c085->m_frame.f_lineno = 244;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 244;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_pos );
            tmp_left_name_5 = var_pos;
            tmp_right_name_5 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 245;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_7 = tmp_left_name_5;
            var_pos = tmp_assign_source_7;

        }
        branch_no_7:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( var_len_str );
        tmp_left_name_6 = var_len_str;
        CHECK_OBJECT( var_pos );
        tmp_right_name_6 = var_pos;
        tmp_compexpr_left_7 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        Py_DECREF( tmp_compexpr_left_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
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
            PyObject *tmp_raise_type_5;
            PyObject *tmp_make_exception_arg_5;
            tmp_make_exception_arg_5 = const_str_digest_9544b87982742993c0f5f3a4b895482e;
            frame_0a38dd885073829beb4cc0c37ba9c085->m_frame.f_lineno = 249;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_5 };
                tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_5 == NULL) );
            exception_type = tmp_raise_type_5;
            exception_lineno = 249;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_9:;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_subscribed_name_5;
        PyObject *tmp_subscript_name_5;
        PyObject *tmp_start_name_3;
        PyObject *tmp_stop_name_3;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_step_name_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        int tmp_ass_subscript_res_3;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_5 = par_dt_str;
        CHECK_OBJECT( var_pos );
        tmp_start_name_3 = var_pos;
        CHECK_OBJECT( var_pos );
        tmp_left_name_7 = var_pos;
        tmp_right_name_7 = const_int_pos_2;
        tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_7, tmp_right_name_7 );
        if ( tmp_stop_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_3 = Py_None;
        tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
        Py_DECREF( tmp_stop_name_3 );
        assert( !(tmp_subscript_name_5 == NULL) );
        tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
        Py_DECREF( tmp_subscript_name_5 );
        if ( tmp_int_arg_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_3 = PyNumber_Int( tmp_int_arg_3 );
        Py_DECREF( tmp_int_arg_3 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_components );
        tmp_ass_subscribed_3 = var_components;
        tmp_ass_subscript_3 = const_int_pos_2;
        tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 2, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_ass_subscript_res_3 == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 250;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        CHECK_OBJECT( var_components );
        tmp_tuple_element_3 = var_components;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_pos );
        tmp_left_name_8 = var_pos;
        tmp_right_name_8 = const_int_pos_2;
        tmp_tuple_element_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 251;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a38dd885073829beb4cc0c37ba9c085 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a38dd885073829beb4cc0c37ba9c085 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0a38dd885073829beb4cc0c37ba9c085 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a38dd885073829beb4cc0c37ba9c085, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a38dd885073829beb4cc0c37ba9c085->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a38dd885073829beb4cc0c37ba9c085, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0a38dd885073829beb4cc0c37ba9c085,
        type_description_1,
        par_self,
        par_dt_str,
        var_len_str,
        var_components,
        var_pos,
        var_has_sep
    );


    // Release cached frame.
    if ( frame_0a38dd885073829beb4cc0c37ba9c085 == cache_frame_0a38dd885073829beb4cc0c37ba9c085 )
    {
        Py_DECREF( frame_0a38dd885073829beb4cc0c37ba9c085 );
    }
    cache_frame_0a38dd885073829beb4cc0c37ba9c085 = NULL;

    assertFrameObject( frame_0a38dd885073829beb4cc0c37ba9c085 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_8__parse_isodate_common );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    CHECK_OBJECT( (PyObject *)var_len_str );
    Py_DECREF( var_len_str );
    var_len_str = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_8__parse_isodate_common );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dt_str = python_pars[ 1 ];
    PyObject *var_year = NULL;
    PyObject *var_has_sep = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_weekno = NULL;
    PyObject *var_dayno = NULL;
    PyObject *var_base_date = NULL;
    PyObject *var_ordinal_day = NULL;
    PyObject *var_components = NULL;
    struct Nuitka_FrameObject *frame_f142867eff0bfe660b0f97f60c569970;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f142867eff0bfe660b0f97f60c569970 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f142867eff0bfe660b0f97f60c569970, codeobj_f142867eff0bfe660b0f97f60c569970, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f142867eff0bfe660b0f97f60c569970 = cache_frame_f142867eff0bfe660b0f97f60c569970;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f142867eff0bfe660b0f97f60c569970 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f142867eff0bfe660b0f97f60c569970 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_dt_str );
        tmp_len_arg_1 = par_dt_str;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_4;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d13546195c9d971ea2eff59832fbe688;
            frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 255;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 255;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_1 = par_dt_str;
        tmp_subscript_name_1 = const_slice_int_0_int_pos_4_none;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_year == NULL );
        var_year = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_2 = par_dt_str;
        tmp_subscript_name_2 = const_slice_int_pos_4_int_pos_5_none;
        tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__DATE_SEP );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 260;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_has_sep == NULL );
        var_has_sep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        tmp_left_name_1 = const_int_pos_4;
        CHECK_OBJECT( var_has_sep );
        tmp_right_name_1 = var_has_sep;
        tmp_assign_source_3 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_pos == NULL );
        var_pos = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_dt_str );
        tmp_subscribed_name_3 = par_dt_str;
        CHECK_OBJECT( var_pos );
        tmp_start_name_1 = var_pos;
        CHECK_OBJECT( var_pos );
        tmp_left_name_2 = var_pos;
        tmp_right_name_2 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_3 == NULL) );
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        Py_DECREF( tmp_subscript_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = const_bytes_chr_87;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            CHECK_OBJECT( var_pos );
            tmp_left_name_3 = var_pos;
            tmp_right_name_3 = const_int_pos_1;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = tmp_left_name_3;
            var_pos = tmp_assign_source_4;

        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            PyObject *tmp_step_name_2;
            CHECK_OBJECT( par_dt_str );
            tmp_subscribed_name_4 = par_dt_str;
            CHECK_OBJECT( var_pos );
            tmp_start_name_2 = var_pos;
            CHECK_OBJECT( var_pos );
            tmp_left_name_4 = var_pos;
            tmp_right_name_4 = const_int_pos_2;
            tmp_stop_name_2 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_stop_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            Py_DECREF( tmp_stop_name_2 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 266;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_weekno == NULL );
            var_weekno = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( var_pos );
            tmp_left_name_5 = var_pos;
            tmp_right_name_5 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_6 = tmp_left_name_5;
            var_pos = tmp_assign_source_6;

        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_int_pos_1;
            assert( var_dayno == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var_dayno = tmp_assign_source_7;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT( par_dt_str );
            tmp_len_arg_2 = par_dt_str;
            tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pos );
            tmp_compexpr_right_4 = var_pos;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_compexpr_left_6;
                PyObject *tmp_compexpr_right_6;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                PyObject *tmp_start_name_3;
                PyObject *tmp_stop_name_3;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                PyObject *tmp_step_name_3;
                PyObject *tmp_source_name_2;
                CHECK_OBJECT( par_dt_str );
                tmp_subscribed_name_5 = par_dt_str;
                CHECK_OBJECT( var_pos );
                tmp_start_name_3 = var_pos;
                CHECK_OBJECT( var_pos );
                tmp_left_name_6 = var_pos;
                tmp_right_name_6 = const_int_pos_1;
                tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_stop_name_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 271;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_3 = Py_None;
                tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
                Py_DECREF( tmp_stop_name_3 );
                assert( !(tmp_subscript_name_5 == NULL) );
                tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                Py_DECREF( tmp_subscript_name_5 );
                if ( tmp_compexpr_left_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 271;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_self );
                tmp_source_name_2 = par_self;
                tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__DATE_SEP );
                if ( tmp_compexpr_right_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_6 );

                    exception_lineno = 271;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_left_5 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                Py_DECREF( tmp_compexpr_left_6 );
                Py_DECREF( tmp_compexpr_right_6 );
                if ( tmp_compexpr_left_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 271;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( var_has_sep );
                tmp_compexpr_right_5 = var_has_sep;
                tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_left_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 271;
                    type_description_1 = "oooooooooo";
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
                    PyObject *tmp_raise_type_2;
                    PyObject *tmp_make_exception_arg_2;
                    tmp_make_exception_arg_2 = const_str_digest_f535bcb99a549c8dd80a10510acb23d6;
                    frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 272;
                    {
                        PyObject *call_args[] = { tmp_make_exception_arg_2 };
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                    }

                    assert( !(tmp_raise_type_2 == NULL) );
                    exception_type = tmp_raise_type_2;
                    exception_lineno = 272;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_4:;
            }
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_left_name_7;
                PyObject *tmp_right_name_7;
                CHECK_OBJECT( var_pos );
                tmp_left_name_7 = var_pos;
                CHECK_OBJECT( var_has_sep );
                tmp_right_name_7 = var_has_sep;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 274;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_8 = tmp_left_name_7;
                var_pos = tmp_assign_source_8;

            }
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_int_arg_3;
                PyObject *tmp_subscribed_name_6;
                PyObject *tmp_subscript_name_6;
                PyObject *tmp_start_name_4;
                PyObject *tmp_stop_name_4;
                PyObject *tmp_left_name_8;
                PyObject *tmp_right_name_8;
                PyObject *tmp_step_name_4;
                CHECK_OBJECT( par_dt_str );
                tmp_subscribed_name_6 = par_dt_str;
                CHECK_OBJECT( var_pos );
                tmp_start_name_4 = var_pos;
                CHECK_OBJECT( var_pos );
                tmp_left_name_8 = var_pos;
                tmp_right_name_8 = const_int_pos_1;
                tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_8, tmp_right_name_8 );
                if ( tmp_stop_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_step_name_4 = Py_None;
                tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
                Py_DECREF( tmp_stop_name_4 );
                assert( !(tmp_subscript_name_6 == NULL) );
                tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
                Py_DECREF( tmp_subscript_name_6 );
                if ( tmp_int_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = PyNumber_Int( tmp_int_arg_3 );
                Py_DECREF( tmp_int_arg_3 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 276;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_dayno;
                    assert( old != NULL );
                    var_dayno = tmp_assign_source_9;
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_9;
                PyObject *tmp_right_name_9;
                CHECK_OBJECT( var_pos );
                tmp_left_name_9 = var_pos;
                tmp_right_name_9 = const_int_pos_1;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 277;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = tmp_left_name_9;
                var_pos = tmp_assign_source_10;

            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( var_year );
            tmp_args_element_name_1 = var_year;
            CHECK_OBJECT( var_weekno );
            tmp_args_element_name_2 = var_weekno;
            CHECK_OBJECT( var_dayno );
            tmp_args_element_name_3 = var_dayno;
            frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 279;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_11 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain__calculate_weekdate, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_base_date == NULL );
            var_base_date = tmp_assign_source_11;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_left_name_10;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_right_name_10;
            CHECK_OBJECT( par_dt_str );
            tmp_len_arg_3 = par_dt_str;
            tmp_left_name_10 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_left_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_pos );
            tmp_right_name_10 = var_pos;
            tmp_compexpr_left_7 = BINARY_OPERATION_SUB_LONG_OBJECT( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_left_name_10 );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_7 = const_int_pos_3;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 282;
                type_description_1 = "oooooooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
                frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 283;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 283;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_int_arg_4;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_subscript_name_7;
            PyObject *tmp_start_name_5;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_step_name_5;
            CHECK_OBJECT( par_dt_str );
            tmp_subscribed_name_7 = par_dt_str;
            CHECK_OBJECT( var_pos );
            tmp_start_name_5 = var_pos;
            CHECK_OBJECT( var_pos );
            tmp_left_name_11 = var_pos;
            tmp_right_name_11 = const_int_pos_3;
            tmp_stop_name_5 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_11, tmp_right_name_11 );
            if ( tmp_stop_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_5 = Py_None;
            tmp_subscript_name_7 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            Py_DECREF( tmp_stop_name_5 );
            assert( !(tmp_subscript_name_7 == NULL) );
            tmp_int_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscript_name_7 );
            if ( tmp_int_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = PyNumber_Int( tmp_int_arg_4 );
            Py_DECREF( tmp_int_arg_4 );
            if ( tmp_assign_source_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 285;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_ordinal_day == NULL );
            var_ordinal_day = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_left_name_12;
            PyObject *tmp_right_name_12;
            CHECK_OBJECT( var_pos );
            tmp_left_name_12 = var_pos;
            tmp_right_name_12 = const_int_pos_3;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_12, tmp_right_name_12 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_13 = tmp_left_name_12;
            var_pos = tmp_assign_source_13;

        }
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_left_name_13;
            PyObject *tmp_right_name_13;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( var_ordinal_day );
            tmp_compexpr_left_8 = var_ordinal_day;
            tmp_compexpr_right_8 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oooooooooo";
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
            CHECK_OBJECT( var_ordinal_day );
            tmp_compexpr_left_9 = var_ordinal_day;
            tmp_left_name_13 = const_int_pos_365;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_calendar );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_calendar );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "calendar" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 288;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_1;
            CHECK_OBJECT( var_year );
            tmp_args_element_name_4 = var_year;
            frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 288;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_right_name_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_isleap, call_args );
            }

            if ( tmp_right_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_9 = BINARY_OPERATION_ADD_LONG_OBJECT( tmp_left_name_13, tmp_right_name_13 );
            Py_DECREF( tmp_right_name_13 );
            if ( tmp_compexpr_right_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 288;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_6 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_6 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                PyObject *tmp_left_name_14;
                PyObject *tmp_right_name_14;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_5;
                PyObject *tmp_args_element_name_6;
                tmp_left_name_14 = const_str_digest_cd54625f84514313bc3f884cd8f3dbc7;
                tmp_called_instance_3 = const_str_digest_e5eecc50669fd5896ad2f4832a63eda9;
                CHECK_OBJECT( var_ordinal_day );
                tmp_args_element_name_5 = var_ordinal_day;
                CHECK_OBJECT( var_year );
                tmp_args_element_name_6 = var_year;
                frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 290;
                {
                    PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
                    tmp_right_name_14 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_format, call_args );
                }

                if ( tmp_right_name_14 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 290;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_make_exception_arg_4 = BINARY_OPERATION_ADD_UNICODE_OBJECT( tmp_left_name_14, tmp_right_name_14 );
                Py_DECREF( tmp_right_name_14 );
                if ( tmp_make_exception_arg_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 289;
                    type_description_1 = "oooooooooo";
                    goto frame_exception_exit_1;
                }
                frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 289;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_4 );
                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 289;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_right_name_15;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( var_year );
            tmp_args_element_name_7 = var_year;
            tmp_args_element_name_8 = const_int_pos_1;
            tmp_args_element_name_9 = const_int_pos_1;
            frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 292;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
                tmp_left_name_15 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_left_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_left_name_15 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_3;
            tmp_dict_key_1 = const_str_plain_days;
            CHECK_OBJECT( var_ordinal_day );
            tmp_left_name_16 = var_ordinal_day;
            tmp_right_name_16 = const_int_pos_1;
            tmp_dict_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_16, tmp_right_name_16 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_f142867eff0bfe660b0f97f60c569970->m_frame.f_lineno = 292;
            tmp_right_name_15 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_right_name_15 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_15 );

                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_15, tmp_right_name_15 );
            Py_DECREF( tmp_left_name_15 );
            Py_DECREF( tmp_right_name_15 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 292;
                type_description_1 = "oooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_base_date == NULL );
            var_base_date = tmp_assign_source_14;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_list_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( var_base_date );
        tmp_source_name_3 = var_base_date;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_year );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = PyList_New( 3 );
        PyList_SET_ITEM( tmp_assign_source_15, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_base_date );
        tmp_source_name_4 = var_base_date;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_month );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 294;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_15, 1, tmp_list_element_1 );
        CHECK_OBJECT( var_base_date );
        tmp_source_name_5 = var_base_date;
        tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_day );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_15 );

            exception_lineno = 294;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_assign_source_15, 2, tmp_list_element_1 );
        assert( var_components == NULL );
        var_components = tmp_assign_source_15;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT( var_components );
        tmp_tuple_element_1 = var_components;
        tmp_return_value = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
        if ( var_pos == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_pos;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f142867eff0bfe660b0f97f60c569970 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f142867eff0bfe660b0f97f60c569970 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f142867eff0bfe660b0f97f60c569970 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f142867eff0bfe660b0f97f60c569970, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f142867eff0bfe660b0f97f60c569970->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f142867eff0bfe660b0f97f60c569970, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f142867eff0bfe660b0f97f60c569970,
        type_description_1,
        par_self,
        par_dt_str,
        var_year,
        var_has_sep,
        var_pos,
        var_weekno,
        var_dayno,
        var_base_date,
        var_ordinal_day,
        var_components
    );


    // Release cached frame.
    if ( frame_f142867eff0bfe660b0f97f60c569970 == cache_frame_f142867eff0bfe660b0f97f60c569970 )
    {
        Py_DECREF( frame_f142867eff0bfe660b0f97f60c569970 );
    }
    cache_frame_f142867eff0bfe660b0f97f60c569970 = NULL;

    assertFrameObject( frame_f142867eff0bfe660b0f97f60c569970 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    CHECK_OBJECT( (PyObject *)var_year );
    Py_DECREF( var_year );
    var_year = NULL;

    CHECK_OBJECT( (PyObject *)var_has_sep );
    Py_DECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_weekno );
    var_weekno = NULL;

    Py_XDECREF( var_dayno );
    var_dayno = NULL;

    CHECK_OBJECT( (PyObject *)var_base_date );
    Py_DECREF( var_base_date );
    var_base_date = NULL;

    Py_XDECREF( var_ordinal_day );
    var_ordinal_day = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dt_str );
    Py_DECREF( par_dt_str );
    par_dt_str = NULL;

    Py_XDECREF( var_year );
    var_year = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_weekno );
    var_weekno = NULL;

    Py_XDECREF( var_dayno );
    var_dayno = NULL;

    Py_XDECREF( var_base_date );
    var_base_date = NULL;

    Py_XDECREF( var_ordinal_day );
    var_ordinal_day = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_10__calculate_weekdate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_year = python_pars[ 1 ];
    PyObject *par_week = python_pars[ 2 ];
    PyObject *par_day = python_pars[ 3 ];
    PyObject *var_jan_4 = NULL;
    PyObject *var_week_1 = NULL;
    PyObject *var_week_offset = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_2__comparison_result = NULL;
    PyObject *tmp_comparison_chain_2__operand_2 = NULL;
    struct Nuitka_FrameObject *frame_74c03a41851e0745cdc60a0f10fa52e2;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_74c03a41851e0745cdc60a0f10fa52e2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74c03a41851e0745cdc60a0f10fa52e2, codeobj_74c03a41851e0745cdc60a0f10fa52e2, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_74c03a41851e0745cdc60a0f10fa52e2 = cache_frame_74c03a41851e0745cdc60a0f10fa52e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74c03a41851e0745cdc60a0f10fa52e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74c03a41851e0745cdc60a0f10fa52e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        {
            PyObject *tmp_assign_source_1;
            CHECK_OBJECT( par_week );
            tmp_assign_source_1 = par_week;
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            Py_INCREF( tmp_assign_source_1 );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_int_0;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
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
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_operand_name_1 );
            goto try_return_handler_2;
            branch_no_2:;
        }
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_int_pos_54;
            tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 316;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        goto outline_result_1;
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

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            tmp_called_instance_1 = const_str_digest_49da3f2ec8546545939c6eaeb04542e5;
            CHECK_OBJECT( par_week );
            tmp_args_element_name_1 = par_week;
            frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_make_exception_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 317;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_1 );
            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 317;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_3;
        {
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT( par_day );
            tmp_assign_source_3 = par_day;
            assert( tmp_comparison_chain_2__operand_2 == NULL );
            Py_INCREF( tmp_assign_source_3 );
            tmp_comparison_chain_2__operand_2 = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            tmp_compexpr_left_3 = const_int_0;
            CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
            tmp_compexpr_right_3 = tmp_comparison_chain_2__operand_2;
            tmp_assign_source_4 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_comparison_chain_2__comparison_result == NULL );
            tmp_comparison_chain_2__comparison_result = tmp_assign_source_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_4;
            CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
            tmp_operand_name_4 = tmp_comparison_chain_2__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
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
            CHECK_OBJECT( tmp_comparison_chain_2__comparison_result );
            tmp_operand_name_3 = tmp_comparison_chain_2__comparison_result;
            Py_INCREF( tmp_operand_name_3 );
            goto try_return_handler_3;
            branch_no_4:;
        }
        {
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( tmp_comparison_chain_2__operand_2 );
            tmp_compexpr_left_4 = tmp_comparison_chain_2__operand_2;
            tmp_compexpr_right_4 = const_int_pos_8;
            tmp_operand_name_3 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
        Py_DECREF( tmp_comparison_chain_2__operand_2 );
        tmp_comparison_chain_2__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__comparison_result );
        Py_DECREF( tmp_comparison_chain_2__comparison_result );
        tmp_comparison_chain_2__comparison_result = NULL;

        goto outline_result_2;
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

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_2__operand_2 );
        Py_DECREF( tmp_comparison_chain_2__operand_2 );
        tmp_comparison_chain_2__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_2__comparison_result );
        tmp_comparison_chain_2__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
        return NULL;
        outline_result_2:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        Py_DECREF( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_2;
            tmp_called_instance_2 = const_str_digest_d806ef4223107ee5875af23ec9037645;
            CHECK_OBJECT( par_day );
            tmp_args_element_name_2 = par_day;
            frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 320;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_make_exception_arg_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_make_exception_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 320;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 320;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            Py_DECREF( tmp_make_exception_arg_2 );
            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 320;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_date );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "date" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_year );
        tmp_args_element_name_3 = par_year;
        tmp_args_element_name_4 = const_int_pos_1;
        tmp_args_element_name_5 = const_int_pos_4;
        frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 323;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 323;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_jan_4 == NULL );
        var_jan_4 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_jan_4 );
        tmp_left_name_1 = var_jan_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        tmp_dict_key_1 = const_str_plain_days;
        CHECK_OBJECT( var_jan_4 );
        tmp_called_instance_3 = var_jan_4;
        frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 324;
        tmp_subscribed_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isocalendar );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_int_pos_2;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 2 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_dict_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 324;
        tmp_right_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 324;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_week_1 == NULL );
        var_week_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_3;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        CHECK_OBJECT( par_week );
        tmp_left_name_5 = par_week;
        tmp_right_name_3 = const_int_pos_1;
        tmp_left_name_4 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_5, tmp_right_name_3 );
        if ( tmp_left_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = const_int_pos_7;
        tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_left_name_4 );
        if ( tmp_left_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_day );
        tmp_left_name_6 = par_day;
        tmp_right_name_6 = const_int_pos_1;
        tmp_right_name_5 = BINARY_OPERATION_SUB_OBJECT_LONG( tmp_left_name_6, tmp_right_name_6 );
        if ( tmp_right_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_left_name_3 );

            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_5 );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_right_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_week_offset == NULL );
        var_week_offset = tmp_assign_source_7;
    }
    {
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( var_week_1 );
        tmp_left_name_7 = var_week_1;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timedelta );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "timedelta" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        tmp_dict_key_2 = const_str_plain_days;
        CHECK_OBJECT( var_week_offset );
        tmp_dict_value_2 = var_week_offset;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame.f_lineno = 328;
        tmp_right_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74c03a41851e0745cdc60a0f10fa52e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_74c03a41851e0745cdc60a0f10fa52e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74c03a41851e0745cdc60a0f10fa52e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74c03a41851e0745cdc60a0f10fa52e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74c03a41851e0745cdc60a0f10fa52e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74c03a41851e0745cdc60a0f10fa52e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74c03a41851e0745cdc60a0f10fa52e2,
        type_description_1,
        par_self,
        par_year,
        par_week,
        par_day,
        var_jan_4,
        var_week_1,
        var_week_offset
    );


    // Release cached frame.
    if ( frame_74c03a41851e0745cdc60a0f10fa52e2 == cache_frame_74c03a41851e0745cdc60a0f10fa52e2 )
    {
        Py_DECREF( frame_74c03a41851e0745cdc60a0f10fa52e2 );
    }
    cache_frame_74c03a41851e0745cdc60a0f10fa52e2 = NULL;

    assertFrameObject( frame_74c03a41851e0745cdc60a0f10fa52e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_year );
    Py_DECREF( par_year );
    par_year = NULL;

    CHECK_OBJECT( (PyObject *)par_week );
    Py_DECREF( par_week );
    par_week = NULL;

    CHECK_OBJECT( (PyObject *)par_day );
    Py_DECREF( par_day );
    par_day = NULL;

    CHECK_OBJECT( (PyObject *)var_jan_4 );
    Py_DECREF( var_jan_4 );
    var_jan_4 = NULL;

    CHECK_OBJECT( (PyObject *)var_week_1 );
    Py_DECREF( var_week_1 );
    var_week_1 = NULL;

    CHECK_OBJECT( (PyObject *)var_week_offset );
    Py_DECREF( var_week_offset );
    var_week_offset = NULL;

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

    CHECK_OBJECT( (PyObject *)par_year );
    Py_DECREF( par_year );
    par_year = NULL;

    CHECK_OBJECT( (PyObject *)par_week );
    Py_DECREF( par_week );
    par_week = NULL;

    CHECK_OBJECT( (PyObject *)par_day );
    Py_DECREF( par_day );
    par_day = NULL;

    Py_XDECREF( var_jan_4 );
    var_jan_4 = NULL;

    Py_XDECREF( var_week_1 );
    var_week_1 = NULL;

    Py_XDECREF( var_week_offset );
    var_week_offset = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_10__calculate_weekdate );
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


static PyObject *impl_dateutil$parser$isoparser$$$function_11__parse_isotime( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timestr = python_pars[ 1 ];
    PyObject *var_len_str = NULL;
    PyObject *var_components = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_comp = NULL;
    PyObject *var_has_sep = NULL;
    PyObject *var_frac = NULL;
    PyObject *var_us_str = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_57b4ce912831cdd9f761e3fb930e508b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_57b4ce912831cdd9f761e3fb930e508b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_57b4ce912831cdd9f761e3fb930e508b, codeobj_57b4ce912831cdd9f761e3fb930e508b, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_57b4ce912831cdd9f761e3fb930e508b = cache_frame_57b4ce912831cdd9f761e3fb930e508b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_57b4ce912831cdd9f761e3fb930e508b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_57b4ce912831cdd9f761e3fb930e508b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_timestr );
        tmp_len_arg_1 = par_timestr;
        tmp_assign_source_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 331;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_len_str == NULL );
        var_len_str = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = LIST_COPY( const_list_int_0_int_0_int_0_int_0_none_list );
        assert( var_components == NULL );
        var_components = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        assert( var_pos == NULL );
        Py_INCREF( tmp_assign_source_3 );
        var_pos = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_neg_1;
        assert( var_comp == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_comp = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_timestr );
        tmp_len_arg_2 = par_timestr;
        tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_273350d1d4e721d00a990e5736020868;
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 337;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 337;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_left_2 = var_len_str;
        tmp_compexpr_right_2 = const_int_pos_3;
        tmp_and_left_value_1 = RICH_COMPARE_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        assert( !(tmp_and_left_value_1 == NULL) );
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_1 );

            exception_lineno = 339;
            type_description_1 = "ooooooooo";
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
        Py_DECREF( tmp_and_left_value_1 );
        CHECK_OBJECT( par_timestr );
        tmp_subscribed_name_1 = par_timestr;
        tmp_subscript_name_1 = const_slice_int_pos_2_int_pos_3_none;
        tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__TIME_SEP );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_3 );

            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_assign_source_5 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_has_sep == NULL );
        var_has_sep = tmp_assign_source_5;
    }
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if ( var_pos == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_4 = var_pos;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_right_4 = var_len_str;
        tmp_and_left_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        if ( tmp_and_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_and_left_value_2 );

            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        Py_DECREF( tmp_and_left_value_2 );
        CHECK_OBJECT( var_comp );
        tmp_compexpr_left_5 = var_comp;
        tmp_compexpr_right_5 = const_int_pos_5;
        tmp_and_right_value_2 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_operand_name_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 341;
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
        goto loop_end_1;
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( var_comp );
        tmp_left_name_1 = var_comp;
        tmp_right_name_1 = const_int_pos_1;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 342;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = tmp_left_name_1;
        var_comp = tmp_assign_source_6;

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_start_name_1;
        PyObject *tmp_stop_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_step_name_1;
        CHECK_OBJECT( par_timestr );
        tmp_subscribed_name_2 = par_timestr;
        if ( var_pos == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_start_name_1 = var_pos;
        if ( var_pos == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_2 = var_pos;
        tmp_right_name_2 = const_int_pos_1;
        tmp_stop_name_1 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_stop_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_step_name_1 = Py_None;
        tmp_subscript_name_2 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
        Py_DECREF( tmp_stop_name_1 );
        assert( !(tmp_subscript_name_2 == NULL) );
        tmp_compexpr_left_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscript_name_2 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_bytes_digest_4a236ed6f1eb53d95b35f02be4bcef3e;
        tmp_res = PySequence_Contains( tmp_compexpr_right_6, tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            PyObject *tmp_start_name_2;
            PyObject *tmp_stop_name_2;
            PyObject *tmp_step_name_2;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            int tmp_ass_subscript_res_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__parse_tzstr );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_timestr );
            tmp_subscribed_name_3 = par_timestr;
            if ( var_pos == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 346;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_start_name_2 = var_pos;
            tmp_stop_name_2 = Py_None;
            tmp_step_name_2 = Py_None;
            tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_2, tmp_stop_name_2, tmp_step_name_2 );
            assert( !(tmp_subscript_name_3 == NULL) );
            tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            Py_DECREF( tmp_subscript_name_3 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 346;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 346;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_components );
            tmp_ass_subscribed_1 = var_components;
            tmp_ass_subscript_1 = const_int_neg_1;
            tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_ass_subscript_res_1 == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 346;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT( var_len_str );
            tmp_assign_source_7 = var_len_str;
            {
                PyObject *old = var_pos;
                var_pos = tmp_assign_source_7;
                Py_INCREF( var_pos );
                Py_XDECREF( old );
            }

        }
        goto loop_end_1;
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        CHECK_OBJECT( var_comp );
        tmp_compexpr_left_7 = var_comp;
        tmp_compexpr_right_7 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 350;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_int_arg_1;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_3;
            PyObject *tmp_stop_name_3;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_step_name_3;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( par_timestr );
            tmp_subscribed_name_4 = par_timestr;
            if ( var_pos == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_start_name_3 = var_pos;
            if ( var_pos == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_3 = var_pos;
            tmp_right_name_3 = const_int_pos_2;
            tmp_stop_name_3 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_3, tmp_right_name_3 );
            if ( tmp_stop_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_3 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_3, tmp_stop_name_3, tmp_step_name_3 );
            Py_DECREF( tmp_stop_name_3 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_int_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_2 = PyNumber_Int( tmp_int_arg_1 );
            Py_DECREF( tmp_int_arg_1 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_components );
            tmp_ass_subscribed_2 = var_components;
            CHECK_OBJECT( var_comp );
            tmp_ass_subscript_2 = var_comp;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_4;
            if ( var_pos == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 353;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_4 = var_pos;
            tmp_right_name_4 = const_int_pos_2;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 353;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_4;
            var_pos = tmp_assign_source_8;

        }
        {
            nuitka_bool tmp_condition_result_5;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            int tmp_truth_name_1;
            int tmp_and_left_truth_4;
            nuitka_bool tmp_and_left_value_4;
            nuitka_bool tmp_and_right_value_4;
            PyObject *tmp_compexpr_left_8;
            PyObject *tmp_compexpr_right_8;
            PyObject *tmp_compexpr_left_9;
            PyObject *tmp_compexpr_right_9;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_start_name_4;
            PyObject *tmp_stop_name_4;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            PyObject *tmp_step_name_4;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( var_has_sep );
            tmp_truth_name_1 = CHECK_IF_TRUE( var_has_sep );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( var_pos );
            tmp_compexpr_left_8 = var_pos;
            CHECK_OBJECT( var_len_str );
            tmp_compexpr_right_8 = var_len_str;
            tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_timestr );
            tmp_subscribed_name_5 = par_timestr;
            CHECK_OBJECT( var_pos );
            tmp_start_name_4 = var_pos;
            CHECK_OBJECT( var_pos );
            tmp_left_name_5 = var_pos;
            tmp_right_name_5 = const_int_pos_1;
            tmp_stop_name_4 = BINARY_OPERATION_ADD_OBJECT_LONG( tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_stop_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_step_name_4 = Py_None;
            tmp_subscript_name_5 = MAKE_SLICEOBJ3( tmp_start_name_4, tmp_stop_name_4, tmp_step_name_4 );
            Py_DECREF( tmp_stop_name_4 );
            assert( !(tmp_subscript_name_5 == NULL) );
            tmp_compexpr_left_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            Py_DECREF( tmp_subscript_name_5 );
            if ( tmp_compexpr_left_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_compexpr_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__TIME_SEP );
            if ( tmp_compexpr_right_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_9 );

                exception_lineno = 355;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
            Py_DECREF( tmp_compexpr_left_9 );
            Py_DECREF( tmp_compexpr_right_9 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 355;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_right_value_3 = tmp_and_right_value_4;
            goto and_end_4;
            and_left_4:;
            tmp_and_right_value_3 = tmp_and_left_value_4;
            and_end_4:;
            tmp_condition_result_5 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_5 = tmp_and_left_value_3;
            and_end_3:;
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
                PyObject *tmp_assign_source_9;
                PyObject *tmp_left_name_6;
                PyObject *tmp_right_name_6;
                CHECK_OBJECT( var_pos );
                tmp_left_name_6 = var_pos;
                tmp_right_name_6 = const_int_pos_1;
                tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_9 = tmp_left_name_6;
                var_pos = tmp_assign_source_9;

            }
            branch_no_5:;
        }
        branch_no_4:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        CHECK_OBJECT( var_comp );
        tmp_compexpr_left_10 = var_comp;
        tmp_compexpr_right_10 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 358;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_subscribed_name_6;
            PyObject *tmp_subscript_name_6;
            PyObject *tmp_start_name_5;
            PyObject *tmp_stop_name_5;
            PyObject *tmp_step_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__FRACTION_REGEX );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_match );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_timestr );
            tmp_subscribed_name_6 = par_timestr;
            if ( var_pos == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 360;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_start_name_5 = var_pos;
            tmp_stop_name_5 = Py_None;
            tmp_step_name_5 = Py_None;
            tmp_subscript_name_6 = MAKE_SLICEOBJ3( tmp_start_name_5, tmp_stop_name_5, tmp_step_name_5 );
            assert( !(tmp_subscript_name_6 == NULL) );
            tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
            Py_DECREF( tmp_subscript_name_6 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 360;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 360;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 360;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_frac;
                var_frac = tmp_assign_source_10;
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( var_frac );
            tmp_operand_name_2 = var_frac;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 361;
                type_description_1 = "ooooooooo";
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
            goto loop_start_1;
            branch_no_7:;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_subscribed_name_7;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_subscript_name_7;
            CHECK_OBJECT( var_frac );
            tmp_called_instance_1 = var_frac;
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 364;
            tmp_subscribed_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

            if ( tmp_subscribed_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_subscript_name_7 = const_slice_none_int_pos_6_none;
            tmp_assign_source_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
            Py_DECREF( tmp_subscribed_name_7 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 364;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_us_str;
                var_us_str = tmp_assign_source_11;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_left_name_7;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_right_name_7;
            PyObject *tmp_left_name_8;
            PyObject *tmp_right_name_8;
            PyObject *tmp_left_name_9;
            PyObject *tmp_right_name_9;
            PyObject *tmp_len_arg_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( var_us_str );
            tmp_int_arg_2 = var_us_str;
            tmp_left_name_7 = PyNumber_Int( tmp_int_arg_2 );
            if ( tmp_left_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_8 = const_int_pos_10;
            tmp_left_name_9 = const_int_pos_6;
            CHECK_OBJECT( var_us_str );
            tmp_len_arg_3 = var_us_str;
            tmp_right_name_9 = BUILTIN_LEN( tmp_len_arg_3 );
            if ( tmp_right_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 365;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_8 = BINARY_OPERATION_SUB_LONG_LONG( tmp_left_name_9, tmp_right_name_9 );
            Py_DECREF( tmp_right_name_9 );
            assert( !(tmp_right_name_8 == NULL) );
            tmp_right_name_7 = POWER_OPERATION( tmp_left_name_8, tmp_right_name_8 );
            Py_DECREF( tmp_right_name_8 );
            if ( tmp_right_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_7 );

                exception_lineno = 365;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_3 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_7, tmp_right_name_7 );
            Py_DECREF( tmp_left_name_7 );
            Py_DECREF( tmp_right_name_7 );
            if ( tmp_ass_subvalue_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_components );
            tmp_ass_subscribed_3 = var_components;
            CHECK_OBJECT( var_comp );
            tmp_ass_subscript_3 = var_comp;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            Py_DECREF( tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 365;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_len_arg_4;
            PyObject *tmp_called_instance_2;
            if ( var_pos == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 366;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_10 = var_pos;
            CHECK_OBJECT( var_frac );
            tmp_called_instance_2 = var_frac;
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 366;
            tmp_len_arg_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_group );
            if ( tmp_len_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_10 = BUILTIN_LEN( tmp_len_arg_4 );
            Py_DECREF( tmp_len_arg_4 );
            if ( tmp_right_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE( &tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 366;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_12 = tmp_left_name_10;
            var_pos = tmp_assign_source_12;

        }
        branch_no_6:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        if ( var_pos == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pos" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 368;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_11 = var_pos;
        CHECK_OBJECT( var_len_str );
        tmp_compexpr_right_11 = var_len_str;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_7b9c8b2f585fc922a471d79cd765fdad;
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 369;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 369;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        branch_no_8:;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_subscribed_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT( var_components );
        tmp_subscribed_name_8 = var_components;
        tmp_subscript_name_8 = const_int_0;
        tmp_compexpr_left_12 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_8, tmp_subscript_name_8, 0 );
        if ( tmp_compexpr_left_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_12 = const_int_pos_24;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_12, tmp_compexpr_right_12 );
        Py_DECREF( tmp_compexpr_left_12 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 371;
            type_description_1 = "ooooooooo";
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
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            int tmp_truth_name_2;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_any );
            assert( tmp_called_name_3 != NULL );
            {
                PyObject *tmp_assign_source_13;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_subscribed_name_9;
                PyObject *tmp_subscript_name_9;
                CHECK_OBJECT( var_components );
                tmp_subscribed_name_9 = var_components;
                tmp_subscript_name_9 = const_slice_int_pos_1_int_pos_4_none;
                tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 373;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 373;
                    type_description_1 = "ooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_13;
            }
            // Tried code:
            tmp_args_element_name_3 = dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_3)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
            return NULL;
            // Return handler code:
            try_return_handler_2:;
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            goto outline_result_1;
            // End of try:
            CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
            Py_DECREF( tmp_genexpr_1__$0 );
            tmp_genexpr_1__$0 = NULL;

            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
            return NULL;
            outline_result_1:;
            frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 373;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 373;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_2 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 373;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_10 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_b739213d0714b4dd82f3ec1e92951ccc;
                frame_57b4ce912831cdd9f761e3fb930e508b->m_frame.f_lineno = 374;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 374;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_10:;
        }
        branch_no_9:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57b4ce912831cdd9f761e3fb930e508b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_57b4ce912831cdd9f761e3fb930e508b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_57b4ce912831cdd9f761e3fb930e508b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_57b4ce912831cdd9f761e3fb930e508b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_57b4ce912831cdd9f761e3fb930e508b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_57b4ce912831cdd9f761e3fb930e508b,
        type_description_1,
        par_self,
        par_timestr,
        var_len_str,
        var_components,
        var_pos,
        var_comp,
        var_has_sep,
        var_frac,
        var_us_str
    );


    // Release cached frame.
    if ( frame_57b4ce912831cdd9f761e3fb930e508b == cache_frame_57b4ce912831cdd9f761e3fb930e508b )
    {
        Py_DECREF( frame_57b4ce912831cdd9f761e3fb930e508b );
    }
    cache_frame_57b4ce912831cdd9f761e3fb930e508b = NULL;

    assertFrameObject( frame_57b4ce912831cdd9f761e3fb930e508b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_components );
    tmp_return_value = var_components;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timestr );
    Py_DECREF( par_timestr );
    par_timestr = NULL;

    CHECK_OBJECT( (PyObject *)var_len_str );
    Py_DECREF( var_len_str );
    var_len_str = NULL;

    CHECK_OBJECT( (PyObject *)var_components );
    Py_DECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    CHECK_OBJECT( (PyObject *)var_has_sep );
    Py_DECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_frac );
    var_frac = NULL;

    Py_XDECREF( var_us_str );
    var_us_str = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timestr );
    Py_DECREF( par_timestr );
    par_timestr = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    Py_XDECREF( var_components );
    var_components = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_comp );
    var_comp = NULL;

    Py_XDECREF( var_has_sep );
    var_has_sep = NULL;

    Py_XDECREF( var_frac );
    var_frac = NULL;

    Py_XDECREF( var_us_str );
    var_us_str = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_11__parse_isotime );
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



struct dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_locals {
    PyObject *var_component;
    PyObject *tmp_iter_value_0;
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

static PyObject *dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_locals *generator_heap = (struct dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_component = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_3ce73f0d3f758070ab66d21bbcbb81c0, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *) );
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
                generator_heap->exception_lineno = 373;
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
            PyObject *old = generator_heap->var_component;
            generator_heap->var_component = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_component );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_component );
        tmp_compexpr_left_1 = generator_heap->var_component;
        tmp_compexpr_right_1 = const_int_0;
        tmp_expression_name_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_compexpr_left_1, sizeof(PyObject *), &tmp_compexpr_right_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 373;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 373;
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
            generator_heap->var_component
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

    Py_XDECREF( generator_heap->var_component );
    generator_heap->var_component = NULL;

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

    Py_XDECREF( generator_heap->var_component );
    generator_heap->var_component = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_context,
        module_dateutil$parser$isoparser,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_d81e52c7ef5be9c491b182f253980414,
#endif
        codeobj_3ce73f0d3f758070ab66d21bbcbb81c0,
        1,
        sizeof(struct dateutil$parser$isoparser$$$function_11__parse_isotime$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_dateutil$parser$isoparser$$$function_12__parse_tzstr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tzstr = python_pars[ 1 ];
    PyObject *par_zero_as_utc = python_pars[ 2 ];
    PyObject *var_mult = NULL;
    PyObject *var_hours = NULL;
    PyObject *var_minutes = NULL;
    struct Nuitka_FrameObject *frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3, codeobj_1fe6dcc91b96e1d9e6cc171b5c7dd2b3, module_dateutil$parser$isoparser, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 = cache_frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 ) == 2 ); // Frame stack

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
        CHECK_OBJECT( par_tzstr );
        tmp_compexpr_left_1 = par_tzstr;
        tmp_compexpr_right_1 = const_bytes_chr_90;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( par_tzstr );
        tmp_compexpr_left_2 = par_tzstr;
        tmp_compexpr_right_2 = const_bytes_chr_122;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 379;
            type_description_1 = "oooooo";
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 380;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_1;
            frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 380;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_tzutc );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 380;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( par_tzstr );
        tmp_len_arg_1 = par_tzstr;
        tmp_compexpr_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = PySet_New( const_set_2fbb033eaf09004b738b14061b4856f6 );
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 382;
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_1a2b0f43e4fa1cb2d64c6910cc212e07;
            frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 383;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 383;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_tzstr );
        tmp_subscribed_name_1 = par_tzstr;
        tmp_subscript_name_1 = const_slice_int_0_int_pos_1_none;
        tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_compexpr_left_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = const_bytes_chr_45;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
        Py_DECREF( tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 385;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = const_int_neg_1;
            assert( var_mult == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_mult = tmp_assign_source_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( par_tzstr );
            tmp_subscribed_name_2 = par_tzstr;
            tmp_subscript_name_2 = const_slice_int_0_int_pos_1_none;
            tmp_compexpr_left_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = const_bytes_chr_43;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            Py_DECREF( tmp_compexpr_left_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 387;
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
                PyObject *tmp_assign_source_2;
                tmp_assign_source_2 = const_int_pos_1;
                assert( var_mult == NULL );
                Py_INCREF( tmp_assign_source_2 );
                var_mult = tmp_assign_source_2;
            }
            goto branch_end_4;
            branch_no_4:;
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                tmp_make_exception_arg_2 = const_str_digest_bc5f26e35a2d70ffe8f304fb4e60ed29;
                frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 390;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 390;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_end_4:;
        }
        branch_end_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_subscribed_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT( par_tzstr );
        tmp_subscribed_name_3 = par_tzstr;
        tmp_subscript_name_3 = const_slice_int_pos_1_int_pos_3_none;
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
        if ( tmp_int_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
        Py_DECREF( tmp_int_arg_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hours == NULL );
        var_hours = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT( par_tzstr );
        tmp_len_arg_2 = par_tzstr;
        tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_2 );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_6 = const_int_pos_3;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        assert( !(tmp_res == -1) );
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
            tmp_assign_source_4 = const_int_0;
            assert( var_minutes == NULL );
            Py_INCREF( tmp_assign_source_4 );
            var_minutes = tmp_assign_source_4;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_int_arg_2;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            PyObject *tmp_start_name_1;
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            PyObject *tmp_source_name_1;
            PyObject *tmp_stop_name_1;
            PyObject *tmp_step_name_1;
            CHECK_OBJECT( par_tzstr );
            tmp_subscribed_name_4 = par_tzstr;
            CHECK_OBJECT( par_tzstr );
            tmp_subscribed_name_5 = par_tzstr;
            tmp_subscript_name_5 = const_slice_int_pos_3_int_pos_4_none;
            tmp_compexpr_left_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
            if ( tmp_compexpr_left_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_1 = par_self;
            tmp_compexpr_right_7 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__TIME_SEP );
            if ( tmp_compexpr_right_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_7 );

                exception_lineno = 396;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            Py_DECREF( tmp_compexpr_left_7 );
            Py_DECREF( tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
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
            tmp_start_name_1 = const_int_pos_4;
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_start_name_1 = const_int_pos_3;
            condexpr_end_1:;
            tmp_stop_name_1 = Py_None;
            tmp_step_name_1 = Py_None;
            tmp_subscript_name_4 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
            assert( !(tmp_subscript_name_4 == NULL) );
            tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
            Py_DECREF( tmp_subscript_name_4 );
            if ( tmp_int_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_5 = PyNumber_Int( tmp_int_arg_2 );
            Py_DECREF( tmp_int_arg_2 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 396;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_minutes == NULL );
            var_minutes = tmp_assign_source_5;
        }
        branch_end_5:;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( par_zero_as_utc );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_zero_as_utc );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_hours );
        tmp_compexpr_left_8 = var_hours;
        tmp_compexpr_right_8 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooo";
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
        CHECK_OBJECT( var_minutes );
        tmp_compexpr_left_9 = var_minutes;
        tmp_compexpr_right_9 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 399;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_2 = tmp_mvar_value_2;
            frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 399;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tzutc );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        goto branch_end_6;
        branch_no_6:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            CHECK_OBJECT( var_minutes );
            tmp_compexpr_left_10 = var_minutes;
            tmp_compexpr_right_10 = const_int_pos_59;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 401;
                type_description_1 = "oooooo";
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                tmp_make_exception_arg_3 = const_str_digest_a1e8cc94a5fb27196afc4cccac879310;
                frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 402;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 402;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_7:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            CHECK_OBJECT( var_hours );
            tmp_compexpr_left_11 = var_hours;
            tmp_compexpr_right_11 = const_int_pos_23;
            tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_OBJECT( tmp_compexpr_left_11, tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_raise_type_4;
                PyObject *tmp_make_exception_arg_4;
                tmp_make_exception_arg_4 = const_str_digest_7907ff4b2f599e4370e7f9ad20a6897c;
                frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 405;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_4 };
                    tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_4 == NULL) );
                exception_type = tmp_raise_type_4;
                exception_lineno = 405;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_3;
            PyObject *tmp_left_name_4;
            PyObject *tmp_right_name_2;
            PyObject *tmp_right_name_3;
            PyObject *tmp_right_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_tz );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "tz" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_tzoffset );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = Py_None;
            if ( var_mult == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mult" );
                exception_tb = NULL;
                NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                CHAIN_EXCEPTION( exception_value );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_2 = var_mult;
            CHECK_OBJECT( var_hours );
            tmp_left_name_4 = var_hours;
            tmp_right_name_2 = const_int_pos_60;
            tmp_left_name_3 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_4, tmp_right_name_2 );
            if ( tmp_left_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_minutes );
            tmp_right_name_3 = var_minutes;
            tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_left_name_3 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_left_name_1 = BINARY_OPERATION_MUL_OBJECT_OBJECT( tmp_left_name_2, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_4 = const_int_pos_60;
            tmp_args_element_name_2 = BINARY_OPERATION_MUL_OBJECT_LONG( tmp_left_name_1, tmp_right_name_4 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame.f_lineno = 407;
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


                exception_lineno = 407;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_end_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3,
        type_description_1,
        par_self,
        par_tzstr,
        par_zero_as_utc,
        var_mult,
        var_hours,
        var_minutes
    );


    // Release cached frame.
    if ( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 == cache_frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 )
    {
        Py_DECREF( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );
    }
    cache_frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 = NULL;

    assertFrameObject( frame_1fe6dcc91b96e1d9e6cc171b5c7dd2b3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_12__parse_tzstr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tzstr );
    Py_DECREF( par_tzstr );
    par_tzstr = NULL;

    CHECK_OBJECT( (PyObject *)par_zero_as_utc );
    Py_DECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    Py_XDECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_hours );
    var_hours = NULL;

    Py_XDECREF( var_minutes );
    var_minutes = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tzstr );
    Py_DECREF( par_tzstr );
    par_tzstr = NULL;

    CHECK_OBJECT( (PyObject *)par_zero_as_utc );
    Py_DECREF( par_zero_as_utc );
    par_zero_as_utc = NULL;

    Py_XDECREF( var_mult );
    var_mult = NULL;

    Py_XDECREF( var_hours );
    var_hours = NULL;

    Py_XDECREF( var_minutes );
    var_minutes = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser$$$function_12__parse_tzstr );
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



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_10__calculate_weekdate,
        const_str_plain__calculate_weekdate,
#if PYTHON_VERSION >= 300
        const_str_digest_721bc1aa30b64bd3642a7350541ba875,
#endif
        codeobj_74c03a41851e0745cdc60a0f10fa52e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_3dc887f1fb8082ad07bc6a899cdfc40c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_11__parse_isotime,
        const_str_plain__parse_isotime,
#if PYTHON_VERSION >= 300
        const_str_digest_dd3f8ce78f1e9e917b041dfc99536745,
#endif
        codeobj_57b4ce912831cdd9f761e3fb930e508b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_12__parse_tzstr,
        const_str_plain__parse_tzstr,
#if PYTHON_VERSION >= 300
        const_str_digest_d3e96ef4753a96ddf2d2adb2ecf7fea4,
#endif
        codeobj_1fe6dcc91b96e1d9e6cc171b5c7dd2b3,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii,
        const_str_plain__takes_ascii,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e3bf4d43defdd7309d4a1012824404e9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func,
        const_str_plain_func,
#if PYTHON_VERSION >= 300
        const_str_digest_7340a4cb5be5425958394de31cf804b1,
#endif
        codeobj_5becb2cd02d6954800f538df406aa000,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_1__takes_ascii$$$function_1_func$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        const_str_digest_3b4e7a51f7e41b6b6a2bfe87e1c2fbc5,
#endif
        codeobj_c0f31117b72c9b5ea002127e6e3c03b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_bc384ce083cb344b6bc03ca5721ca286,
#endif
        codeobj_9a138f868baebad412dba7c3c4c3c838,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_ba418bb085ae97b5ed215c87204a41b8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_3_isoparse,
        const_str_plain_isoparse,
#if PYTHON_VERSION >= 300
        const_str_digest_aba2d64fcb9d4a810e6452cb117fb2cd,
#endif
        codeobj_7a8bcad4194e893791ace716283ca340,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_06aa45119164e8a43a0b7ab7cb1fcba7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_4_parse_isodate,
        const_str_plain_parse_isodate,
#if PYTHON_VERSION >= 300
        const_str_digest_feb53e680b6c7d690400004131ece18e,
#endif
        codeobj_adc79be43a8dc84e4e87ce096bcb8ac5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_eeece1440ba68c7ebd4a1a68d1035641,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_5_parse_isotime,
        const_str_plain_parse_isotime,
#if PYTHON_VERSION >= 300
        const_str_digest_ca7bdd5f09b573d90dd77e9dd7681d48,
#endif
        codeobj_8622382fc9ec7e994e54e0b54e5257b7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_dc41cce4b2abe5b79410e80649d4c406,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_6_parse_tzstr,
        const_str_plain_parse_tzstr,
#if PYTHON_VERSION >= 300
        const_str_digest_ad78b016e2101d9307280b1e79d08c75,
#endif
        codeobj_3b3ce94ed6837ab91ad03a274880b078,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        const_str_digest_7fe7a3c1ee63a7cc42d939939870fcad,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_7__parse_isodate,
        const_str_plain__parse_isodate,
#if PYTHON_VERSION >= 300
        const_str_digest_4c6175688270c1bbd29a67a501516908,
#endif
        codeobj_8a3a25210fd91f989612ab2afd36187c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_8__parse_isodate_common,
        const_str_plain__parse_isodate_common,
#if PYTHON_VERSION >= 300
        const_str_digest_2f655a33a5d6c2b979f5e03c27a784e7,
#endif
        codeobj_0a38dd885073829beb4cc0c37ba9c085,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon,
        const_str_plain__parse_isodate_uncommon,
#if PYTHON_VERSION >= 300
        const_str_digest_3f489f137f8d33c449617a3431dc588b,
#endif
        codeobj_f142867eff0bfe660b0f97f60c569970,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_dateutil$parser$isoparser,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_dateutil$parser$isoparser =
{
    PyModuleDef_HEAD_INIT,
    "dateutil.parser.isoparser",
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

MOD_INIT_DECL( dateutil$parser$isoparser )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_dateutil$parser$isoparser );
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
    puts("dateutil.parser.isoparser: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.parser.isoparser: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("dateutil.parser.isoparser: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initdateutil$parser$isoparser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_dateutil$parser$isoparser = Py_InitModule4(
        "dateutil.parser.isoparser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_dateutil$parser$isoparser = PyModule_Create( &mdef_dateutil$parser$isoparser );
#endif

    moduledict_dateutil$parser$isoparser = MODULE_DICT( module_dateutil$parser$isoparser );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_dateutil$parser$isoparser,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_dateutil$parser$isoparser,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$parser$isoparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_dateutil$parser$isoparser,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_dateutil$parser$isoparser );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1, module_dateutil$parser$isoparser );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_beb956c0bb7554c8cbfa49f8f4c03f46;
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
    PyObject *locals_dateutil$parser$isoparser_42 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_f7c82930034b34111c6807cb41f4bc1d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_f7c82930034b34111c6807cb41f4bc1d_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_a312668a277fce14e7c7bca251a8f70f;
        UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_beb956c0bb7554c8cbfa49f8f4c03f46 = MAKE_MODULE_FRAME( codeobj_beb956c0bb7554c8cbfa49f8f4c03f46, module_dateutil$parser$isoparser );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_beb956c0bb7554c8cbfa49f8f4c03f46 );
    assert( Py_REFCNT( frame_beb956c0bb7554c8cbfa49f8f4c03f46 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = module_filename_obj;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___spec__ );

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
        UPDATE_STRING_DICT0( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_datetime;
        tmp_globals_name_1 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_81eaf81202eb00cc15286a3691f24b31_tuple;
        tmp_level_name_1 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

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
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_datetime );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_timedelta );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_timedelta, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_time );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_date );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_date, tmp_assign_source_8 );
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_calendar;
        tmp_globals_name_2 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 11;
        tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_calendar, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_dateutil;
        tmp_globals_name_3 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_tz_tuple;
        tmp_level_name_3 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_tz );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_tz, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_functools;
        tmp_globals_name_4 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_wraps_tuple;
        tmp_level_name_4 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 14;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_wraps );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_wraps, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_re;
        tmp_globals_name_5 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 16;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_six;
        tmp_globals_name_6 = (PyObject *)moduledict_dateutil$parser$isoparser;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 17;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = LIST_COPY( const_list_str_plain_isoparse_str_plain_isoparser_list );
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_1__takes_ascii(  );



        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii, tmp_assign_source_15 );
    }
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
        nuitka_bool tmp_condition_result_1;
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


            exception_lineno = 42;

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


            exception_lineno = 42;

            goto try_except_handler_2;
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


            exception_lineno = 42;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_17;
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


            exception_lineno = 42;

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


            exception_lineno = 42;

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


                exception_lineno = 42;

                goto try_except_handler_2;
            }
            tmp_args_name_1 = const_tuple_str_plain_isoparser_tuple_type_object_tuple_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;
            frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 42;
            tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_2;
            }
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_18;
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


                exception_lineno = 42;

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


                    exception_lineno = 42;

                    goto try_except_handler_2;
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

                    exception_lineno = 42;

                    goto try_except_handler_2;
                }
                PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
                tmp_raise_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                Py_DECREF( tmp_right_name_1 );
                if ( tmp_raise_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 42;

                    goto try_except_handler_2;
                }
                exception_type = tmp_raise_type_1;
                Py_INCREF( tmp_raise_type_1 );
                exception_value = tmp_raise_value_1;
                exception_lineno = 42;
                RAISE_EXCEPTION_IMPLICIT( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = PyDict_New();
            assert( tmp_class_creation_1__prepared == NULL );
            tmp_class_creation_1__prepared = tmp_assign_source_19;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT( tmp_class_creation_1__prepared );
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dateutil$parser$isoparser_42 = tmp_set_locals_1;
            Py_INCREF( tmp_set_locals_1 );
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = const_str_digest_9c6b0644c10d698bb3f458dcc1eefca1;
        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___module__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_4;
        }
        tmp_dictset_value = const_str_plain_isoparser;
        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___qualname__, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 42;

            goto try_except_handler_4;
        }
        MAKE_OR_REUSE_FRAME( cache_frame_f7c82930034b34111c6807cb41f4bc1d_2, codeobj_f7c82930034b34111c6807cb41f4bc1d, module_dateutil$parser$isoparser, sizeof(void *) );
        frame_f7c82930034b34111c6807cb41f4bc1d_2 = cache_frame_f7c82930034b34111c6807cb41f4bc1d_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_f7c82930034b34111c6807cb41f4bc1d_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_f7c82930034b34111c6807cb41f4bc1d_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_2___init__( tmp_defaults_1 );



            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            tmp_called_name_2 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

            if ( tmp_called_name_2 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 59;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                Py_INCREF( tmp_called_name_2 );
                }
            }

            tmp_args_element_name_1 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_3_isoparse(  );



            frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame.f_lineno = 59;
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


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_isoparse, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 59;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_called_name_3 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

            if ( tmp_called_name_3 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 148;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_3 = tmp_mvar_value_4;
                Py_INCREF( tmp_called_name_3 );
                }
            }

            tmp_args_element_name_2 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_4_parse_isodate(  );



            frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame.f_lineno = 148;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_isodate, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 148;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_3;
            tmp_called_name_4 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

            if ( tmp_called_name_4 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 165;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_4 = tmp_mvar_value_5;
                Py_INCREF( tmp_called_name_4 );
                }
            }

            tmp_args_element_name_3 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_5_parse_isotime(  );



            frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame.f_lineno = 165;
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


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_isotime, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_defaults_2;
            tmp_called_name_5 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain__takes_ascii );

            if ( tmp_called_name_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain__takes_ascii );

                if (unlikely( tmp_mvar_value_6 == NULL ))
                {
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__takes_ascii );
                }

                if ( tmp_mvar_value_6 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_takes_ascii" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 181;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_name_5 = tmp_mvar_value_6;
                Py_INCREF( tmp_called_name_5 );
                }
            }

            tmp_defaults_2 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_args_element_name_4 = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_6_parse_tzstr( tmp_defaults_2 );



            frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame.f_lineno = 181;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain_parse_tzstr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = const_bytes_chr_45;
        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__DATE_SEP, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = const_bytes_chr_58;
        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__TIME_SEP, tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 203;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_7;
            tmp_called_instance_1 = PyObject_GetItem( locals_dateutil$parser$isoparser_42, const_str_plain_re );

            if ( tmp_called_instance_1 == NULL )
            {
                if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
                {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_re );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                    CHAIN_EXCEPTION( exception_value );

                    exception_lineno = 204;
                    type_description_2 = "o";
                    goto frame_exception_exit_2;
                }

                tmp_called_instance_1 = tmp_mvar_value_7;
                Py_INCREF( tmp_called_instance_1 );
                }
            }

            frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame.f_lineno = 204;
            tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_compile, &PyTuple_GET_ITEM( const_tuple_bytes_digest_d541ff279fd53a8084cb698b9eda71d0_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__FRACTION_REGEX, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_7__parse_isodate(  );



        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 206;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_8__parse_isodate_common(  );



        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate_common, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 212;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_9__parse_isodate_uncommon(  );



        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isodate_uncommon, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_10__calculate_weekdate(  );



        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__calculate_weekdate, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_11__parse_isotime(  );



        tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_isotime, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 330;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_dateutil$parser$isoparser$$$function_12__parse_tzstr( tmp_defaults_3 );



            tmp_res = PyObject_SetItem( locals_dateutil$parser$isoparser_42, const_str_plain__parse_tzstr, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 378;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f7c82930034b34111c6807cb41f4bc1d_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_f7c82930034b34111c6807cb41f4bc1d_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_f7c82930034b34111c6807cb41f4bc1d_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_f7c82930034b34111c6807cb41f4bc1d_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_f7c82930034b34111c6807cb41f4bc1d_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_f7c82930034b34111c6807cb41f4bc1d_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame.
        if ( frame_f7c82930034b34111c6807cb41f4bc1d_2 == cache_frame_f7c82930034b34111c6807cb41f4bc1d_2 )
        {
            Py_DECREF( frame_f7c82930034b34111c6807cb41f4bc1d_2 );
        }
        cache_frame_f7c82930034b34111c6807cb41f4bc1d_2 = NULL;

        assertFrameObject( frame_f7c82930034b34111c6807cb41f4bc1d_2 );

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
            PyObject *tmp_assign_source_21;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kw_name_2;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_6 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_2 = const_str_plain_isoparser;
            tmp_args_name_2 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_tuple_type_object_tuple;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = locals_dateutil$parser$isoparser_42;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_2 );
            CHECK_OBJECT( tmp_class_creation_1__class_decl_dict );
            tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 42;
            tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_args_name_2 );
            if ( tmp_assign_source_21 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 42;

                goto try_except_handler_4;
            }
            assert( outline_0_var___class__ == NULL );
            outline_0_var___class__ = tmp_assign_source_21;
        }
        CHECK_OBJECT( outline_0_var___class__ );
        tmp_assign_source_20 = outline_0_var___class__;
        Py_INCREF( tmp_assign_source_20 );
        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF( locals_dateutil$parser$isoparser_42 );
        locals_dateutil$parser$isoparser_42 = NULL;
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

        Py_DECREF( locals_dateutil$parser$isoparser_42 );
        locals_dateutil$parser$isoparser_42 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
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
        NUITKA_CANNOT_GET_HERE( dateutil$parser$isoparser );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 42;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparser, tmp_assign_source_20 );
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
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
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparser );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isoparser );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isoparser" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 410;

            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_8;
        frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame.f_lineno = 410;
        tmp_assign_source_22 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_ISOPARSER );
        }

        CHECK_OBJECT( tmp_mvar_value_9 );
        tmp_source_name_5 = tmp_mvar_value_9;
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isoparse );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain_isoparse, tmp_assign_source_23 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_beb956c0bb7554c8cbfa49f8f4c03f46 );
#endif
    popFrameStack();

    assertFrameObject( frame_beb956c0bb7554c8cbfa49f8f4c03f46 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_beb956c0bb7554c8cbfa49f8f4c03f46 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_beb956c0bb7554c8cbfa49f8f4c03f46, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_beb956c0bb7554c8cbfa49f8f4c03f46->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_beb956c0bb7554c8cbfa49f8f4c03f46, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_dateutil$parser$isoparser, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_dateutil$parser$isoparser );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
