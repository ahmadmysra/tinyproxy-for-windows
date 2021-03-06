/* A Bison parser, made by GNU Bison 1.875a.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     KW_PORT = 258,
     KW_LISTEN = 259,
     KW_LOGFILE = 260,
     KW_PIDFILE = 261,
     KW_SYSLOG = 262,
     KW_MAXCLIENTS = 263,
     KW_MAXSPARESERVERS = 264,
     KW_MINSPARESERVERS = 265,
     KW_STARTSERVERS = 266,
     KW_MAXREQUESTSPERCHILD = 267,
     KW_TIMEOUT = 268,
     KW_USER = 269,
     KW_GROUP = 270,
     KW_ANONYMOUS = 271,
     KW_XTINYPROXY = 272,
     KW_FILTER = 273,
     KW_FILTERURLS = 274,
     KW_FILTEREXTENDED = 275,
     KW_FILTER_DEFAULT_DENY = 276,
     KW_FILTER_CASESENSITIVE = 277,
     KW_UPSTREAM = 278,
     KW_REVERSEPATH = 279,
     KW_REVERSEONLY = 280,
     KW_REVERSEMAGIC = 281,
     KW_REVERSEBASEURL = 282,
     KW_CONNECTPORT = 283,
     KW_BIND = 284,
     KW_STATHOST = 285,
     KW_ALLOW = 286,
     KW_DENY = 287,
     KW_ERRORPAGE = 288,
     KW_DEFAULT_ERRORPAGE = 289,
     KW_STATPAGE = 290,
     KW_VIA_PROXY_NAME = 291,
     KW_YES = 292,
     KW_NO = 293,
     KW_LOGLEVEL = 294,
     KW_LOG_CRITICAL = 295,
     KW_LOG_ERROR = 296,
     KW_LOG_WARNING = 297,
     KW_LOG_NOTICE = 298,
     KW_LOG_CONNECT = 299,
     KW_LOG_INFO = 300,
     IDENTIFIER = 301,
     NUMBER = 302,
     STRING = 303,
     NUMERIC_ADDRESS = 304,
     NETMASK_ADDRESS = 305
   };
#endif
#define KW_PORT 258
#define KW_LISTEN 259
#define KW_LOGFILE 260
#define KW_PIDFILE 261
#define KW_SYSLOG 262
#define KW_MAXCLIENTS 263
#define KW_MAXSPARESERVERS 264
#define KW_MINSPARESERVERS 265
#define KW_STARTSERVERS 266
#define KW_MAXREQUESTSPERCHILD 267
#define KW_TIMEOUT 268
#define KW_USER 269
#define KW_GROUP 270
#define KW_ANONYMOUS 271
#define KW_XTINYPROXY 272
#define KW_FILTER 273
#define KW_FILTERURLS 274
#define KW_FILTEREXTENDED 275
#define KW_FILTER_DEFAULT_DENY 276
#define KW_FILTER_CASESENSITIVE 277
#define KW_UPSTREAM 278
#define KW_REVERSEPATH 279
#define KW_REVERSEONLY 280
#define KW_REVERSEMAGIC 281
#define KW_REVERSEBASEURL 282
#define KW_CONNECTPORT 283
#define KW_BIND 284
#define KW_STATHOST 285
#define KW_ALLOW 286
#define KW_DENY 287
#define KW_ERRORPAGE 288
#define KW_DEFAULT_ERRORPAGE 289
#define KW_STATPAGE 290
#define KW_VIA_PROXY_NAME 291
#define KW_YES 292
#define KW_NO 293
#define KW_LOGLEVEL 294
#define KW_LOG_CRITICAL 295
#define KW_LOG_ERROR 296
#define KW_LOG_WARNING 297
#define KW_LOG_NOTICE 298
#define KW_LOG_CONNECT 299
#define KW_LOG_INFO 300
#define IDENTIFIER 301
#define NUMBER 302
#define STRING 303
#define NUMERIC_ADDRESS 304
#define NETMASK_ADDRESS 305




#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 37 "grammar.y"
typedef union YYSTYPE {
	unsigned int num;
	char *cptr;
} YYSTYPE;
/* Line 1240 of yacc.c.  */
#line 142 "y.tab.h"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;



