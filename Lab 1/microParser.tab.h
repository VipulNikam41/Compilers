/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

#ifndef YY_YY_MICROPARSER_TAB_H_INCLUDED
# define YY_YY_MICROPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _PROGRAM = 258,
    _BEGIN = 259,
    _END = 260,
    _IF = 261,
    _ELSE = 262,
    _FI = 263,
    _FOR = 264,
    _FUNCTION = 265,
    _READ = 266,
    _WRITE = 267,
    _ROF = 268,
    _RETURN = 269,
    _STRING = 270,
    _VOID = 271,
    ASSIGN_OP = 272,
    ADD_OP = 273,
    SUB_OP = 274,
    MULT_OP = 275,
    DIV_OP = 276,
    EQ_OP = 277,
    NOTEQ_OP = 278,
    LT_OP = 279,
    GT_OP = 280,
    OPEN_PARENTHESIS = 281,
    CLOSED_PARENTHESIS = 282,
    SEMICOLON = 283,
    COMMA = 284,
    LTE_OP = 285,
    GTE_OP = 286,
    _INT = 287,
    _FLOAT = 288,
    INTLITERAL = 289,
    STRINGLITERAL = 290,
    FLOATLITERAL = 291,
    IDENTIFIER = 292
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 72 "microParser.y"

    int intval;
    float floatval;
    std::string* strval;
    std::vector<std::string*> *strlist;
    ASTNode *astnode;
    std::vector<ASTNode*> *astlist;

#line 104 "microParser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MICROPARSER_TAB_H_INCLUDED  */
