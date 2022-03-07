
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     BLOCK = 258,
     DEF = 259,
     IF = 260,
     ELIF = 261,
     ELSE = 262,
     PRINT = 263,
     FOR = 264,
     IN = 265,
     CLASS = 266,
     INIT = 267,
     Q = 268,
     ITEMS = 269,
     SETDEFAULT = 270,
     NONE = 271,
     LAMBDA = 272,
     FROM = 273,
     AS = 274,
     INT = 275,
     FLOAT = 276,
     STRINGA = 277,
     STRINGB = 278,
     VAR = 279,
     SELF = 280,
     FILEVAR = 281,
     IMPORT = 282,
     GREATEREQ = 283,
     LESSEQ = 284,
     GREATER = 285,
     LESS = 286,
     NOTEQ = 287,
     EQ = 288
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 33 "bison.y"

	
	int ival;
	float fval;
	char* sval;
	struct list_t* symtab_item;
	struct Param* parameter;





/* Line 1676 of yacc.c  */
#line 98 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


