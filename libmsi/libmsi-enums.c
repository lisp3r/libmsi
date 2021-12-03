
/* Generated data (by glib-mkenums) */

/*
 * Copyright (C) 2002,2003 Mike McCormack
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#include "libmsi-enums.h"
#include "libmsi-types.h"

GType
libmsi_result_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { LIBMSI_RESULT_SUCCESS, "LIBMSI_RESULT_SUCCESS", "success" },
        { LIBMSI_RESULT_ACCESS_DENIED, "LIBMSI_RESULT_ACCESS_DENIED", "access-denied" },
        { LIBMSI_RESULT_INVALID_HANDLE, "LIBMSI_RESULT_INVALID_HANDLE", "invalid-handle" },
        { LIBMSI_RESULT_NOT_ENOUGH_MEMORY, "LIBMSI_RESULT_NOT_ENOUGH_MEMORY", "not-enough-memory" },
        { LIBMSI_RESULT_INVALID_DATA, "LIBMSI_RESULT_INVALID_DATA", "invalid-data" },
        { LIBMSI_RESULT_OUTOFMEMORY, "LIBMSI_RESULT_OUTOFMEMORY", "outofmemory" },
        { LIBMSI_RESULT_INVALID_PARAMETER, "LIBMSI_RESULT_INVALID_PARAMETER", "invalid-parameter" },
        { LIBMSI_RESULT_OPEN_FAILED, "LIBMSI_RESULT_OPEN_FAILED", "open-failed" },
        { LIBMSI_RESULT_CALL_NOT_IMPLEMENTED, "LIBMSI_RESULT_CALL_NOT_IMPLEMENTED", "call-not-implemented" },
        { LIBMSI_RESULT_MORE_DATA, "LIBMSI_RESULT_MORE_DATA", "more-data" },
        { LIBMSI_RESULT_NOT_FOUND, "LIBMSI_RESULT_NOT_FOUND", "not-found" },
        { LIBMSI_RESULT_CONTINUE, "LIBMSI_RESULT_CONTINUE", "continue" },
        { LIBMSI_RESULT_UNKNOWN_PROPERTY, "LIBMSI_RESULT_UNKNOWN_PROPERTY", "unknown-property" },
        { LIBMSI_RESULT_BAD_QUERY_SYNTAX, "LIBMSI_RESULT_BAD_QUERY_SYNTAX", "bad-query-syntax" },
        { LIBMSI_RESULT_INVALID_FIELD, "LIBMSI_RESULT_INVALID_FIELD", "invalid-field" },
        { LIBMSI_RESULT_FUNCTION_FAILED, "LIBMSI_RESULT_FUNCTION_FAILED", "function-failed" },
        { LIBMSI_RESULT_INVALID_TABLE, "LIBMSI_RESULT_INVALID_TABLE", "invalid-table" },
        { LIBMSI_RESULT_DATATYPE_MISMATCH, "LIBMSI_RESULT_DATATYPE_MISMATCH", "datatype-mismatch" },
        { LIBMSI_RESULT_INVALID_DATATYPE, "LIBMSI_RESULT_INVALID_DATATYPE", "invalid-datatype" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("LibmsiResultError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


GType
libmsi_property_type_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { LIBMSI_PROPERTY_TYPE_EMPTY, "LIBMSI_PROPERTY_TYPE_EMPTY", "empty" },
        { LIBMSI_PROPERTY_TYPE_INT, "LIBMSI_PROPERTY_TYPE_INT", "int" },
        { LIBMSI_PROPERTY_TYPE_STRING, "LIBMSI_PROPERTY_TYPE_STRING", "string" },
        { LIBMSI_PROPERTY_TYPE_FILETIME, "LIBMSI_PROPERTY_TYPE_FILETIME", "filetime" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("LibmsiPropertyType"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


GType
libmsi_col_info_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { LIBMSI_COL_INFO_NAMES, "LIBMSI_COL_INFO_NAMES", "names" },
        { LIBMSI_COL_INFO_TYPES, "LIBMSI_COL_INFO_TYPES", "types" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("LibmsiColInfo"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


GType
libmsi_db_flags_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { LIBMSI_DB_FLAGS_READONLY, "LIBMSI_DB_FLAGS_READONLY", "readonly" },
        { LIBMSI_DB_FLAGS_CREATE, "LIBMSI_DB_FLAGS_CREATE", "create" },
        { LIBMSI_DB_FLAGS_TRANSACT, "LIBMSI_DB_FLAGS_TRANSACT", "transact" },
        { LIBMSI_DB_FLAGS_PATCH, "LIBMSI_DB_FLAGS_PATCH", "patch" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_flags_register_static (g_intern_static_string ("LibmsiDbFlags"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


GType
libmsi_db_error_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { LIBMSI_DB_ERROR_SUCCESS, "LIBMSI_DB_ERROR_SUCCESS", "success" },
        { LIBMSI_DB_ERROR_INVALIDARG, "LIBMSI_DB_ERROR_INVALIDARG", "invalidarg" },
        { LIBMSI_DB_ERROR_MOREDATA, "LIBMSI_DB_ERROR_MOREDATA", "moredata" },
        { LIBMSI_DB_ERROR_FUNCTIONERROR, "LIBMSI_DB_ERROR_FUNCTIONERROR", "functionerror" },
        { LIBMSI_DB_ERROR_DUPLICATEKEY, "LIBMSI_DB_ERROR_DUPLICATEKEY", "duplicatekey" },
        { LIBMSI_DB_ERROR_REQUIRED, "LIBMSI_DB_ERROR_REQUIRED", "required" },
        { LIBMSI_DB_ERROR_BADLINK, "LIBMSI_DB_ERROR_BADLINK", "badlink" },
        { LIBMSI_DB_ERROR_OVERFLOW, "LIBMSI_DB_ERROR_OVERFLOW", "overflow" },
        { LIBMSI_DB_ERROR_UNDERFLOW, "LIBMSI_DB_ERROR_UNDERFLOW", "underflow" },
        { LIBMSI_DB_ERROR_NOTINSET, "LIBMSI_DB_ERROR_NOTINSET", "notinset" },
        { LIBMSI_DB_ERROR_BADVERSION, "LIBMSI_DB_ERROR_BADVERSION", "badversion" },
        { LIBMSI_DB_ERROR_BADCASE, "LIBMSI_DB_ERROR_BADCASE", "badcase" },
        { LIBMSI_DB_ERROR_BADGUID, "LIBMSI_DB_ERROR_BADGUID", "badguid" },
        { LIBMSI_DB_ERROR_BADWILDCARD, "LIBMSI_DB_ERROR_BADWILDCARD", "badwildcard" },
        { LIBMSI_DB_ERROR_BADIDENTIFIER, "LIBMSI_DB_ERROR_BADIDENTIFIER", "badidentifier" },
        { LIBMSI_DB_ERROR_BADLANGUAGE, "LIBMSI_DB_ERROR_BADLANGUAGE", "badlanguage" },
        { LIBMSI_DB_ERROR_BADFILENAME, "LIBMSI_DB_ERROR_BADFILENAME", "badfilename" },
        { LIBMSI_DB_ERROR_BADPATH, "LIBMSI_DB_ERROR_BADPATH", "badpath" },
        { LIBMSI_DB_ERROR_BADCONDITION, "LIBMSI_DB_ERROR_BADCONDITION", "badcondition" },
        { LIBMSI_DB_ERROR_BADFORMATTED, "LIBMSI_DB_ERROR_BADFORMATTED", "badformatted" },
        { LIBMSI_DB_ERROR_BADTEMPLATE, "LIBMSI_DB_ERROR_BADTEMPLATE", "badtemplate" },
        { LIBMSI_DB_ERROR_BADDEFAULTDIR, "LIBMSI_DB_ERROR_BADDEFAULTDIR", "baddefaultdir" },
        { LIBMSI_DB_ERROR_BADREGPATH, "LIBMSI_DB_ERROR_BADREGPATH", "badregpath" },
        { LIBMSI_DB_ERROR_BADCUSTOMSOURCE, "LIBMSI_DB_ERROR_BADCUSTOMSOURCE", "badcustomsource" },
        { LIBMSI_DB_ERROR_BADPROPERTY, "LIBMSI_DB_ERROR_BADPROPERTY", "badproperty" },
        { LIBMSI_DB_ERROR_MISSINGDATA, "LIBMSI_DB_ERROR_MISSINGDATA", "missingdata" },
        { LIBMSI_DB_ERROR_BADCATEGORY, "LIBMSI_DB_ERROR_BADCATEGORY", "badcategory" },
        { LIBMSI_DB_ERROR_BADKEYTABLE, "LIBMSI_DB_ERROR_BADKEYTABLE", "badkeytable" },
        { LIBMSI_DB_ERROR_BADMAXMINVALUES, "LIBMSI_DB_ERROR_BADMAXMINVALUES", "badmaxminvalues" },
        { LIBMSI_DB_ERROR_BADCABINET, "LIBMSI_DB_ERROR_BADCABINET", "badcabinet" },
        { LIBMSI_DB_ERROR_BADSHORTCUT, "LIBMSI_DB_ERROR_BADSHORTCUT", "badshortcut" },
        { LIBMSI_DB_ERROR_STRINGOVERFLOW, "LIBMSI_DB_ERROR_STRINGOVERFLOW", "stringoverflow" },
        { LIBMSI_DB_ERROR_BADLOCALIZEATTRIB, "LIBMSI_DB_ERROR_BADLOCALIZEATTRIB", "badlocalizeattrib" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("LibmsiDBError"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


GType
libmsi_property_get_type (void)
{
  static volatile gsize g_define_type_id__volatile = 0;

  if (g_once_init_enter (&g_define_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { LIBMSI_PROPERTY_DICTIONARY, "LIBMSI_PROPERTY_DICTIONARY", "dictionary" },
        { LIBMSI_PROPERTY_CODEPAGE, "LIBMSI_PROPERTY_CODEPAGE", "codepage" },
        { LIBMSI_PROPERTY_TITLE, "LIBMSI_PROPERTY_TITLE", "title" },
        { LIBMSI_PROPERTY_SUBJECT, "LIBMSI_PROPERTY_SUBJECT", "subject" },
        { LIBMSI_PROPERTY_AUTHOR, "LIBMSI_PROPERTY_AUTHOR", "author" },
        { LIBMSI_PROPERTY_KEYWORDS, "LIBMSI_PROPERTY_KEYWORDS", "keywords" },
        { LIBMSI_PROPERTY_COMMENTS, "LIBMSI_PROPERTY_COMMENTS", "comments" },
        { LIBMSI_PROPERTY_TEMPLATE, "LIBMSI_PROPERTY_TEMPLATE", "template" },
        { LIBMSI_PROPERTY_LASTAUTHOR, "LIBMSI_PROPERTY_LASTAUTHOR", "lastauthor" },
        { LIBMSI_PROPERTY_UUID, "LIBMSI_PROPERTY_UUID", "uuid" },
        { LIBMSI_PROPERTY_EDITTIME, "LIBMSI_PROPERTY_EDITTIME", "edittime" },
        { LIBMSI_PROPERTY_LASTPRINTED, "LIBMSI_PROPERTY_LASTPRINTED", "lastprinted" },
        { LIBMSI_PROPERTY_CREATED_TM, "LIBMSI_PROPERTY_CREATED_TM", "created-tm" },
        { LIBMSI_PROPERTY_LASTSAVED_TM, "LIBMSI_PROPERTY_LASTSAVED_TM", "lastsaved-tm" },
        { LIBMSI_PROPERTY_VERSION, "LIBMSI_PROPERTY_VERSION", "version" },
        { LIBMSI_PROPERTY_SOURCE, "LIBMSI_PROPERTY_SOURCE", "source" },
        { LIBMSI_PROPERTY_RESTRICT, "LIBMSI_PROPERTY_RESTRICT", "restrict" },
        { LIBMSI_PROPERTY_THUMBNAIL, "LIBMSI_PROPERTY_THUMBNAIL", "thumbnail" },
        { LIBMSI_PROPERTY_APPNAME, "LIBMSI_PROPERTY_APPNAME", "appname" },
        { LIBMSI_PROPERTY_SECURITY, "LIBMSI_PROPERTY_SECURITY", "security" },
        { 0, NULL, NULL }
      };
      GType g_define_type_id =
        g_enum_register_static (g_intern_static_string ("LibmsiProperty"), values);
      g_once_init_leave (&g_define_type_id__volatile, g_define_type_id);
    }

  return g_define_type_id__volatile;
}


/* Generated data ends here */

