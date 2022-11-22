// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.
// //                    "%code top" blocks.
#line 74 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:397

    #include "../include/sdc_lexer.hpp"
    //Bison calls sdcparse_lex() to get the next token.
    //We use the VHdc_Lexer class as the interface to the lexer, so we
    //re-defined the function to tell Bison how to get the next token.
    static sdcparse::VHdc_Parser::symbol_type sdcparse_lex(sdcparse::VHdc_Lexer& lexer) {
        return lexer.next_token();
    }

#line 44 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:397

// Take the name prefix into account.
#define yylex   sdcparse_lex

// First part of user declarations.
#line 84 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:404


#include <stdio.h>
#include "assert.h"

#include "../include/sdcparse.hpp"
#include "../include/sdc_common.hpp"
#include "../include/sdc_error.hpp"

using namespace sdcparse;


#line 63 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "sdc_parser.gen.hpp"

// User implementation prologue.

#line 77 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:412


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif



// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if SDCPARSE_DEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !SDCPARSE_DEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !SDCPARSE_DEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)

#line 34 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:479
namespace sdcparse {
#line 144 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  VHdc_Parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  VHdc_Parser::VHdc_Parser (VHdc_Lexer& lexer_yyarg, Callback& callback_yyarg)
    :
#if SDCPARSE_DEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      lexer (lexer_yyarg),
      callback (callback_yyarg)
  {}

  VHdc_Parser::~VHdc_Parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  VHdc_Parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  VHdc_Parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  VHdc_Parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  VHdc_Parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  VHdc_Parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  VHdc_Parser::symbol_number_type
  VHdc_Parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  VHdc_Parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  VHdc_Parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s)
  {
      switch (that.type_get ())
    {
      case 49: // cmd_create_clock
        value.move< CreateClock > (that.value);
        break;

      case 61: // cmd_current_design
        value.move< CurrentDesign > (that.value);
        break;

      case 52: // cmd_set_clock_groups
        value.move< SetClockGroups > (that.value);
        break;

      case 58: // cmd_set_clock_latency
        value.move< SetClockLatency > (that.value);
        break;

      case 57: // cmd_set_clock_uncertainty
        value.move< SetClockUncertainty > (that.value);
        break;

      case 59: // cmd_set_disable_timing
        value.move< SetDisableTiming > (that.value);
        break;

      case 53: // cmd_set_false_path
        value.move< SetFalsePath > (that.value);
        break;

      case 50: // cmd_set_input_delay
      case 51: // cmd_set_output_delay
        value.move< SetIoDelay > (that.value);
        break;

      case 54: // cmd_set_max_delay
      case 55: // cmd_set_min_delay
        value.move< SetMinMaxDelay > (that.value);
        break;

      case 56: // cmd_set_multicycle_path
        value.move< SetMulticyclePath > (that.value);
        break;

      case 60: // cmd_set_timing_derate
        value.move< SetTimingDerate > (that.value);
        break;

      case 62: // cmd_get_ports
      case 63: // cmd_get_clocks
      case 64: // cmd_get_cells
      case 65: // cmd_get_pins
      case 66: // stringGroup
        value.move< StringGroup > (that.value);
        break;

      case 45: // FLOAT_NUMBER
      case 68: // number
      case 69: // float_number
        value.move< float > (that.value);
        break;

      case 46: // INT_NUMBER
      case 70: // int_number
        value.move< int > (that.value);
        break;

      case 42: // STRING
      case 43: // ESCAPED_STRING
      case 44: // CHAR
      case 67: // string
        value.move< std::string > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  VHdc_Parser::stack_symbol_type&
  VHdc_Parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 49: // cmd_create_clock
        value.copy< CreateClock > (that.value);
        break;

      case 61: // cmd_current_design
        value.copy< CurrentDesign > (that.value);
        break;

      case 52: // cmd_set_clock_groups
        value.copy< SetClockGroups > (that.value);
        break;

      case 58: // cmd_set_clock_latency
        value.copy< SetClockLatency > (that.value);
        break;

      case 57: // cmd_set_clock_uncertainty
        value.copy< SetClockUncertainty > (that.value);
        break;

      case 59: // cmd_set_disable_timing
        value.copy< SetDisableTiming > (that.value);
        break;

      case 53: // cmd_set_false_path
        value.copy< SetFalsePath > (that.value);
        break;

      case 50: // cmd_set_input_delay
      case 51: // cmd_set_output_delay
        value.copy< SetIoDelay > (that.value);
        break;

      case 54: // cmd_set_max_delay
      case 55: // cmd_set_min_delay
        value.copy< SetMinMaxDelay > (that.value);
        break;

      case 56: // cmd_set_multicycle_path
        value.copy< SetMulticyclePath > (that.value);
        break;

      case 60: // cmd_set_timing_derate
        value.copy< SetTimingDerate > (that.value);
        break;

      case 62: // cmd_get_ports
      case 63: // cmd_get_clocks
      case 64: // cmd_get_cells
      case 65: // cmd_get_pins
      case 66: // stringGroup
        value.copy< StringGroup > (that.value);
        break;

      case 45: // FLOAT_NUMBER
      case 68: // number
      case 69: // float_number
        value.copy< float > (that.value);
        break;

      case 46: // INT_NUMBER
      case 70: // int_number
        value.copy< int > (that.value);
        break;

      case 42: // STRING
      case 43: // ESCAPED_STRING
      case 44: // CHAR
      case 67: // string
        value.copy< std::string > (that.value);
        break;

      default:
        break;
    }

    return *this;
  }


  template <typename Base>
  inline
  void
  VHdc_Parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if SDCPARSE_DEBUG
  template <typename Base>
  void
  VHdc_Parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " (";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  VHdc_Parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  VHdc_Parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  VHdc_Parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if SDCPARSE_DEBUG
  std::ostream&
  VHdc_Parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  VHdc_Parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  VHdc_Parser::debug_level_type
  VHdc_Parser::debug_level () const
  {
    return yydebug_;
  }

  void
  VHdc_Parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // SDCPARSE_DEBUG

  inline VHdc_Parser::state_type
  VHdc_Parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  VHdc_Parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  VHdc_Parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  VHdc_Parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (lexer));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 49: // cmd_create_clock
        yylhs.value.build< CreateClock > ();
        break;

      case 61: // cmd_current_design
        yylhs.value.build< CurrentDesign > ();
        break;

      case 52: // cmd_set_clock_groups
        yylhs.value.build< SetClockGroups > ();
        break;

      case 58: // cmd_set_clock_latency
        yylhs.value.build< SetClockLatency > ();
        break;

      case 57: // cmd_set_clock_uncertainty
        yylhs.value.build< SetClockUncertainty > ();
        break;

      case 59: // cmd_set_disable_timing
        yylhs.value.build< SetDisableTiming > ();
        break;

      case 53: // cmd_set_false_path
        yylhs.value.build< SetFalsePath > ();
        break;

      case 50: // cmd_set_input_delay
      case 51: // cmd_set_output_delay
        yylhs.value.build< SetIoDelay > ();
        break;

      case 54: // cmd_set_max_delay
      case 55: // cmd_set_min_delay
        yylhs.value.build< SetMinMaxDelay > ();
        break;

      case 56: // cmd_set_multicycle_path
        yylhs.value.build< SetMulticyclePath > ();
        break;

      case 60: // cmd_set_timing_derate
        yylhs.value.build< SetTimingDerate > ();
        break;

      case 62: // cmd_get_ports
      case 63: // cmd_get_clocks
      case 64: // cmd_get_cells
      case 65: // cmd_get_pins
      case 66: // stringGroup
        yylhs.value.build< StringGroup > ();
        break;

      case 45: // FLOAT_NUMBER
      case 68: // number
      case 69: // float_number
        yylhs.value.build< float > ();
        break;

      case 46: // INT_NUMBER
      case 70: // int_number
        yylhs.value.build< int > ();
        break;

      case 42: // STRING
      case 43: // ESCAPED_STRING
      case 44: // CHAR
      case 67: // string
        yylhs.value.build< std::string > ();
        break;

      default:
        break;
    }



      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 177 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { }
#line 726 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 3:
#line 178 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_create_clock(callback, lexer, yystack_[1].value.as< CreateClock > ()); }
#line 732 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 4:
#line 179 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_io_delay(callback, lexer, yystack_[1].value.as< SetIoDelay > ()); }
#line 738 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 5:
#line 180 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_io_delay(callback, lexer, yystack_[1].value.as< SetIoDelay > ()); }
#line 744 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 6:
#line 181 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_clock_groups(callback, lexer, yystack_[1].value.as< SetClockGroups > ()); }
#line 750 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 7:
#line 182 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_false_path(callback, lexer, yystack_[1].value.as< SetFalsePath > ()); }
#line 756 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 8:
#line 183 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_min_max_delay(callback, lexer, yystack_[1].value.as< SetMinMaxDelay > ()); }
#line 762 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 9:
#line 184 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_min_max_delay(callback, lexer, yystack_[1].value.as< SetMinMaxDelay > ()); }
#line 768 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 10:
#line 185 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_multicycle_path(callback, lexer, yystack_[1].value.as< SetMulticyclePath > ()); }
#line 774 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 11:
#line 186 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_clock_uncertainty(callback, lexer, yystack_[1].value.as< SetClockUncertainty > ()); }
#line 780 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 12:
#line 187 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_clock_latency(callback, lexer, yystack_[1].value.as< SetClockLatency > ()); }
#line 786 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 13:
#line 188 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_disable_timing(callback, lexer, yystack_[1].value.as< SetDisableTiming > ()); }
#line 792 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 14:
#line 189 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sdc_set_timing_derate(callback, lexer, yystack_[1].value.as< SetTimingDerate > ()); }
#line 798 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 15:
#line 190 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { callback.lineno(lexer.lineno()); add_sgdc_current_design(callback, lexer, yystack_[1].value.as< CurrentDesign > ()); }
#line 804 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 16:
#line 191 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { /* Eat stray EOL symbols */ }
#line 810 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 17:
#line 194 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = CreateClock(); }
#line 816 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 18:
#line 195 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = yystack_[2].value.as< CreateClock > (); sdc_create_clock_set_period(callback, lexer, yylhs.value.as< CreateClock > (), yystack_[0].value.as< float > ()); }
#line 822 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 19:
#line 196 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = yystack_[2].value.as< CreateClock > (); sdc_create_clock_set_name(callback, lexer, yylhs.value.as< CreateClock > (), yystack_[0].value.as< std::string > ()); }
#line 828 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 20:
#line 197 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = yystack_[5].value.as< CreateClock > (); sdc_create_clock_set_waveform(callback, lexer, yylhs.value.as< CreateClock > (), yystack_[2].value.as< float > (), yystack_[1].value.as< float > ()); }
#line 834 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 21:
#line 198 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = yystack_[3].value.as< CreateClock > (); sdc_create_clock_add_targets(callback, lexer, yylhs.value.as< CreateClock > (), yystack_[1].value.as< StringGroup > ()); 
                                                            }
#line 841 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 22:
#line 200 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CreateClock > () = yystack_[1].value.as< CreateClock > (); sdc_create_clock_add_targets(callback, lexer, yylhs.value.as< CreateClock > (), 
                                                                        make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ())); 
                                                            }
#line 849 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 23:
#line 205 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = SetIoDelay(IoDelayType::INPUT); }
#line 855 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 24:
#line 206 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[2].value.as< SetIoDelay > (); sdc_set_io_delay_set_clock(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[0].value.as< std::string > ()); }
#line 861 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 25:
#line 207 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_max(callback, lexer, yylhs.value.as< SetIoDelay > ()); }
#line 867 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 26:
#line 208 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_min(callback, lexer, yylhs.value.as< SetIoDelay > ()); }
#line 873 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 27:
#line 209 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_value(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[0].value.as< float > ()); }
#line 879 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 28:
#line 210 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[3].value.as< SetIoDelay > (); sdc_set_io_delay_set_ports(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[1].value.as< StringGroup > ()); }
#line 885 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 29:
#line 213 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = SetIoDelay(IoDelayType::OUTPUT); }
#line 891 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 30:
#line 214 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[2].value.as< SetIoDelay > (); sdc_set_io_delay_set_clock(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[0].value.as< std::string > ()); }
#line 897 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 31:
#line 215 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_max(callback, lexer, yylhs.value.as< SetIoDelay > ()); }
#line 903 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 32:
#line 216 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_min(callback, lexer, yylhs.value.as< SetIoDelay > ()); }
#line 909 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 33:
#line 217 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[1].value.as< SetIoDelay > (); sdc_set_io_delay_set_value(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[0].value.as< float > ()); }
#line 915 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 34:
#line 218 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetIoDelay > () = yystack_[3].value.as< SetIoDelay > (); sdc_set_io_delay_set_ports(callback, lexer, yylhs.value.as< SetIoDelay > (), yystack_[1].value.as< StringGroup > ()); }
#line 921 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 35:
#line 221 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockGroups > () = SetClockGroups(); }
#line 927 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 36:
#line 222 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockGroups > () = yystack_[1].value.as< SetClockGroups > (); sdc_set_clock_groups_set_type(callback, lexer, yylhs.value.as< SetClockGroups > (), ClockGroupsType::EXCLUSIVE); }
#line 933 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 37:
#line 223 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockGroups > () = yystack_[4].value.as< SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as< SetClockGroups > (), yystack_[1].value.as< StringGroup > ()); }
#line 939 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 38:
#line 224 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockGroups > () = yystack_[4].value.as< SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as< SetClockGroups > (), yystack_[1].value.as< StringGroup > ()); }
#line 945 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 39:
#line 225 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockGroups > () = yystack_[2].value.as< SetClockGroups > (); sdc_set_clock_groups_add_group(callback, lexer, yylhs.value.as< SetClockGroups > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ())); 
                                                            }
#line 953 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 40:
#line 230 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = SetFalsePath(); }
#line 959 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 41:
#line 231 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[4].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 965 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 42:
#line 232 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[4].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 971 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 43:
#line 233 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[4].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 977 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 44:
#line 234 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[4].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 983 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 45:
#line 235 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[2].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                    FromToType::FROM); 
                                                            }
#line 992 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 46:
#line 239 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetFalsePath > () = yystack_[2].value.as< SetFalsePath > (); sdc_set_false_path_add_to_from_group(callback, lexer, yylhs.value.as< SetFalsePath > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                    FromToType::TO  ); 
                                                            }
#line 1001 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 47:
#line 245 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = SetMinMaxDelay(MinMaxType::MAX); }
#line 1007 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 48:
#line 246 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[1].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_set_value(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[0].value.as< float > ()); }
#line 1013 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 49:
#line 247 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1019 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 50:
#line 248 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1025 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 51:
#line 249 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1031 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 52:
#line 250 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1037 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 53:
#line 251 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[2].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                    FromToType::FROM);
                                                            }
#line 1046 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 54:
#line 255 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[2].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()),
                                                                    FromToType::TO);
                                                            }
#line 1055 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 55:
#line 261 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = SetMinMaxDelay(MinMaxType::MIN); }
#line 1061 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 56:
#line 262 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[1].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_set_value(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[0].value.as< float > ()); }
#line 1067 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 57:
#line 263 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1073 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 58:
#line 264 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1079 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 59:
#line 265 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1085 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 60:
#line 266 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[4].value.as< SetMinMaxDelay > (); sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1091 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 61:
#line 267 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[2].value.as< SetMinMaxDelay > ();
                                                              sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                    FromToType::FROM);
                                                            }
#line 1101 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 62:
#line 272 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMinMaxDelay > () = yystack_[2].value.as< SetMinMaxDelay > (); 
                                                              sdc_set_min_max_delay_add_to_from_group(callback, lexer, yylhs.value.as< SetMinMaxDelay > (), 
                                                                    make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()),
                                                                    FromToType::TO);
                                                            }
#line 1111 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 63:
#line 279 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = SetMulticyclePath(); }
#line 1117 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 64:
#line 280 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[1].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_set_mcp_value(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[0].value.as< int > ()); }
#line 1123 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 65:
#line 281 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[1].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_set_setup(callback, lexer, yylhs.value.as< SetMulticyclePath > ()); }
#line 1129 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 66:
#line 282 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[1].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_set_hold(callback, lexer, yylhs.value.as< SetMulticyclePath > ()); }
#line 1135 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 67:
#line 283 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1141 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 68:
#line 284 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::TO); }
#line 1147 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 69:
#line 285 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1153 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 70:
#line 286 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::TO); }
#line 1159 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 71:
#line 287 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1165 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 72:
#line 288 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[4].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), yystack_[1].value.as< StringGroup > (), FromToType::TO); }
#line 1171 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 73:
#line 289 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[2].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                          FromToType::FROM);
                                                                  }
#line 1180 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 74:
#line 293 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetMulticyclePath > () = yystack_[2].value.as< SetMulticyclePath > (); sdc_set_multicycle_path_add_to_from_group(callback, lexer, yylhs.value.as< SetMulticyclePath > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()),
                                                                          FromToType::TO);
                                                                  }
#line 1189 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 75:
#line 299 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = SetClockUncertainty(); }
#line 1195 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 76:
#line 300 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[1].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_set_setup(callback, lexer, yylhs.value.as< SetClockUncertainty > ()); }
#line 1201 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 77:
#line 301 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[1].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_set_hold(callback, lexer, yylhs.value.as< SetClockUncertainty > ()); }
#line 1207 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 78:
#line 302 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[1].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_set_value(callback, lexer, yylhs.value.as< SetClockUncertainty > (), yystack_[0].value.as< float > ()); }
#line 1213 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 79:
#line 303 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[4].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1219 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 80:
#line 304 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[4].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), yystack_[1].value.as< StringGroup > (), FromToType::TO); }
#line 1225 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 81:
#line 305 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[4].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1231 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 82:
#line 306 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[4].value.as< SetClockUncertainty > (); sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), yystack_[1].value.as< StringGroup > (), FromToType::TO); }
#line 1237 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 83:
#line 307 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[2].value.as< SetClockUncertainty > ();
                                                                      sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()),
                                                                          FromToType::FROM);
                                                                    }
#line 1247 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 84:
#line 312 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockUncertainty > () = yystack_[2].value.as< SetClockUncertainty > ();
                                                                      sdc_set_clock_uncertainty_add_to_from_group(callback, lexer, yylhs.value.as< SetClockUncertainty > (), 
                                                                          make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()),
                                                                          FromToType::TO);
                                                                    }
#line 1257 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 85:
#line 319 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = SetClockLatency(); }
#line 1263 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 86:
#line 320 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = yystack_[1].value.as< SetClockLatency > (); sdc_set_clock_latency_set_type(callback, lexer, yylhs.value.as< SetClockLatency > (), ClockLatencyType::SOURCE); }
#line 1269 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 87:
#line 321 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = yystack_[1].value.as< SetClockLatency > (); sdc_set_clock_latency_early(callback, lexer, yylhs.value.as< SetClockLatency > ()); }
#line 1275 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 88:
#line 322 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = yystack_[1].value.as< SetClockLatency > (); sdc_set_clock_latency_late(callback, lexer, yylhs.value.as< SetClockLatency > ()); }
#line 1281 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 89:
#line 323 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = yystack_[1].value.as< SetClockLatency > (); sdc_set_clock_latency_set_value(callback, lexer, yylhs.value.as< SetClockLatency > (), yystack_[0].value.as< float > ()); }
#line 1287 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 90:
#line 324 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetClockLatency > () = yystack_[3].value.as< SetClockLatency > (); sdc_set_clock_latency_set_clocks(callback, lexer, yylhs.value.as< SetClockLatency > (), yystack_[1].value.as< StringGroup > ()); }
#line 1293 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 91:
#line 328 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = SetDisableTiming(); }
#line 1299 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 92:
#line 329 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[4].value.as< SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1305 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 93:
#line 330 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[4].value.as< SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1311 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 94:
#line 331 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[4].value.as< SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), yystack_[1].value.as< StringGroup > (), FromToType::FROM); }
#line 1317 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 95:
#line 332 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[4].value.as< SetDisableTiming > (); sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), yystack_[1].value.as< StringGroup > (), FromToType::TO  ); }
#line 1323 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 96:
#line 333 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[2].value.as< SetDisableTiming > (); 
                                                                   sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), 
                                                                     make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                     FromToType::FROM); 
                                                                 }
#line 1333 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 97:
#line 338 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetDisableTiming > () = yystack_[2].value.as< SetDisableTiming > (); 
                                                                   sdc_set_disable_timing_add_to_from_group(callback, lexer, yylhs.value.as< SetDisableTiming > (), 
                                                                     make_sdc_string_group(sdcparse::StringGroupType::STRING, yystack_[0].value.as< std::string > ()), 
                                                                     FromToType::TO  ); 
                                                                 }
#line 1343 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 98:
#line 345 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = SetTimingDerate(); }
#line 1349 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 99:
#line 346 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[1].value.as< SetTimingDerate > (); sdc_set_timing_derate_early(callback, lexer, yylhs.value.as< SetTimingDerate > ()); }
#line 1355 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 100:
#line 347 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[1].value.as< SetTimingDerate > (); sdc_set_timing_derate_late(callback, lexer, yylhs.value.as< SetTimingDerate > ()); }
#line 1361 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 101:
#line 348 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[1].value.as< SetTimingDerate > (); sdc_set_timing_derate_target_type(callback, lexer, yylhs.value.as< SetTimingDerate > (), TimingDerateTargetType::NET); }
#line 1367 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 102:
#line 349 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[1].value.as< SetTimingDerate > (); sdc_set_timing_derate_target_type(callback, lexer, yylhs.value.as< SetTimingDerate > (), TimingDerateTargetType::CELL); }
#line 1373 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 103:
#line 350 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[1].value.as< SetTimingDerate > (); sdc_set_timing_derate_value(callback, lexer, yylhs.value.as< SetTimingDerate > (), yystack_[0].value.as< float > ()); }
#line 1379 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 104:
#line 351 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< SetTimingDerate > () = yystack_[3].value.as< SetTimingDerate > (); sdc_set_timing_derate_targets(callback, lexer, yylhs.value.as< SetTimingDerate > (), yystack_[1].value.as< StringGroup > ()); }
#line 1385 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 105:
#line 354 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CurrentDesign > () = CurrentDesign(); }
#line 1391 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 106:
#line 355 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< CurrentDesign > () = yystack_[1].value.as< CurrentDesign > (); sgdc_set_current_design(yylhs.value.as< CurrentDesign > (), yystack_[0].value.as< std::string > ()); }
#line 1397 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 107:
#line 358 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = StringGroup(StringGroupType::PORT); }
#line 1403 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 108:
#line 359 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[3].value.as< StringGroup > (); sdc_string_group_add_strings(yylhs.value.as< StringGroup > (), yystack_[1].value.as< StringGroup > ()); }
#line 1409 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 109:
#line 360 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[1].value.as< StringGroup > (); sdc_string_group_add_string(yylhs.value.as< StringGroup > (), yystack_[0].value.as< std::string > ()); }
#line 1415 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 110:
#line 363 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = StringGroup(StringGroupType::CLOCK); }
#line 1421 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 111:
#line 364 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[3].value.as< StringGroup > (); sdc_string_group_add_strings(yylhs.value.as< StringGroup > (), yystack_[1].value.as< StringGroup > ()); }
#line 1427 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 112:
#line 365 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[1].value.as< StringGroup > (); sdc_string_group_add_string(yylhs.value.as< StringGroup > (), yystack_[0].value.as< std::string > ()); }
#line 1433 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 113:
#line 368 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = StringGroup(StringGroupType::CELL); }
#line 1439 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 114:
#line 369 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[3].value.as< StringGroup > (); sdc_string_group_add_strings(yylhs.value.as< StringGroup > (), yystack_[1].value.as< StringGroup > ()); }
#line 1445 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 115:
#line 370 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[1].value.as< StringGroup > (); sdc_string_group_add_string(yylhs.value.as< StringGroup > (), yystack_[0].value.as< std::string > ()); }
#line 1451 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 116:
#line 373 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = StringGroup(StringGroupType::PIN); }
#line 1457 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 117:
#line 374 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[3].value.as< StringGroup > (); sdc_string_group_add_strings(yylhs.value.as< StringGroup > (), yystack_[1].value.as< StringGroup > ()); }
#line 1463 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 118:
#line 375 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[1].value.as< StringGroup > (); sdc_string_group_add_string(yylhs.value.as< StringGroup > (), yystack_[0].value.as< std::string > ()); }
#line 1469 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 119:
#line 379 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = StringGroup(StringGroupType::STRING); }
#line 1475 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 120:
#line 380 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< StringGroup > () = yystack_[1].value.as< StringGroup > (); sdc_string_group_add_string(yylhs.value.as< StringGroup > (), yystack_[0].value.as< std::string > ()); }
#line 1481 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 121:
#line 382 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< std::string > () = yystack_[0].value.as< std::string > (); }
#line 1487 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 122:
#line 383 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< std::string > () = yystack_[0].value.as< std::string > (); }
#line 1493 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 123:
#line 386 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< float > () = yystack_[0].value.as< float > (); }
#line 1499 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 124:
#line 387 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< float > () = yystack_[0].value.as< int > (); }
#line 1505 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 125:
#line 390 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< float > () = yystack_[0].value.as< float > (); }
#line 1511 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;

  case 126:
#line 393 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:859
    { yylhs.value.as< int > () = yystack_[0].value.as< int > (); }
#line 1517 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
    break;


#line 1521 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yysyntax_error_ (yystack_[0].state, yyla));
      }


    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }


      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  VHdc_Parser::error (const syntax_error& yyexc)
  {
    error (yyexc.what());
  }

  // Generate an error message.
  std::string
  VHdc_Parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char VHdc_Parser::yypact_ninf_ = -58;

  const signed char VHdc_Parser::yytable_ninf_ = -1;

  const short int
  VHdc_Parser::yypact_[] =
  {
     -58,   182,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -13,   108,   169,
      37,   -24,    38,    85,     8,    88,   195,    67,   184,   170,
       0,   -35,    24,   -58,   -58,   -58,   -58,   -58,    24,   -58,
     -58,    -6,   -58,   -58,   -58,   -58,   -58,   -58,    24,   -58,
     -58,    -6,   -58,   -58,   -58,   123,   -58,   130,   137,   -58,
     165,   196,   -58,   -58,   205,   212,   -58,   -58,   219,   226,
     -58,   -58,   -58,   -58,   233,   240,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     1,   -58,   -58,   247,   254,   -58,   -58,
     -58,   -58,   -58,     6,   -58,   -58,   -58,   -58,   -58,     0,
     -58,   -37,   -58,   -58,    80,   -58,   256,     1,   -58,   -58,
       1,   -58,   -58,     1,   -58,   -58,     1,   -58,   -58,     1,
     -58,   -58,     1,   -58,   -58,     1,   -58,   -58,    20,   -58,
     -58,    20,   -58,   -58,     1,   -58,   -58,     1,   -58,   -58,
     -58,   262,    13,   -58,   -58,    13,   -58,   -58,   -58,   264,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   270,   -29,   272,
      33,   278,   135,   280,   203,   286,   210,   288,   217,   294,
     224,   -58,   296,   302,   231,   304,   310,   238,   312,   245,
     318,   330,   -58,   -58,   -58,   320,   334,   326,   338,   -58,
     -58,   -58,     2,   342,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     346,   -58,   -58,   -58,   -58,   350,   -58,   -58,   354,   -58,
     -58,   -58
  };

  const unsigned char
  VHdc_Parser::yydefact_[] =
  {
       2,     0,     1,    17,    35,    40,    47,    55,    63,    23,
      29,    75,    85,    91,    98,   105,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   119,     3,   121,   122,    22,     0,    25,
      26,     0,     4,   125,   126,    27,   123,   124,     0,    31,
      32,     0,     5,    33,    36,     0,     6,     0,     0,     7,
       0,     0,     8,    48,     0,     0,     9,    56,     0,     0,
      65,    66,    10,    64,     0,     0,    76,    77,    11,    78,
      87,    88,    86,     0,    12,    89,     0,     0,    13,    99,
     100,   101,   102,     0,    14,   103,    15,   106,    18,     0,
      19,     0,    24,   107,     0,    30,     0,     0,   119,    39,
       0,   119,    45,     0,   119,    46,     0,   119,    53,     0,
     119,    54,     0,   119,    61,     0,   119,    62,     0,   119,
      73,     0,   119,    74,     0,   119,    83,     0,   119,    84,
     110,     0,     0,   119,    96,     0,   119,    97,   113,     0,
       0,    21,   120,    28,   119,   109,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   116,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,   119,   112,     0,     0,     0,     0,   104,
     119,   115,     0,     0,    37,    38,    41,    43,    42,    44,
      49,    51,    50,    52,    57,    59,    58,    60,    67,    71,
     119,   118,    69,    68,    72,    70,    79,    81,    80,    82,
       0,    92,    94,    93,    95,     0,    20,   108,     0,   111,
     114,   117
  };

  const signed char
  VHdc_Parser::yypgoto_[] =
  {
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,     4,   -57,   -58,   -41,   -26,
     -17,    -3,   -58,    48
  };

  const short int
  VHdc_Parser::yydefgoto_[] =
  {
      -1,     1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   104,   141,   149,   173,   101,
     152,    45,    46,    47
  };

  const unsigned char
  VHdc_Parser::yytable_[] =
  {
      37,    57,    58,   151,    99,    35,    36,    30,    31,    32,
     103,   195,    97,    35,    36,   100,    53,    59,   140,    63,
      67,   102,    79,    85,   148,    95,    33,    98,    34,    35,
      36,   105,   171,    68,    69,    70,    71,   140,   109,   171,
     112,   115,   226,   118,   121,    43,    44,   124,   127,    72,
     157,   130,   133,   159,    44,   106,   161,   136,   139,   163,
      54,    55,   165,    60,    61,   167,    35,    36,   169,   144,
     147,   172,    73,   197,   175,    35,    36,   178,    56,    62,
     180,     0,   158,    43,    44,   160,     0,   155,   162,   155,
     176,   164,    86,    87,   166,     0,   150,   168,     0,     0,
     170,   185,     0,   174,   187,     0,   177,     0,    88,   179,
      64,    65,   181,    74,    75,    76,    77,   186,   153,   154,
     188,     0,    35,    36,   184,     0,    66,     0,   193,    78,
      43,    44,   191,    43,    44,     0,     0,    38,    39,    40,
     184,     0,   184,     0,   184,    41,   184,   192,   184,    42,
     184,     0,   184,    43,    44,   184,   211,   220,   184,   211,
     107,   184,   108,   184,   225,    35,    36,   110,   211,   111,
     211,     0,    35,    36,   113,   199,   114,    35,    36,    35,
      36,     0,     2,     0,   228,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    48,    49,
      50,     0,   116,     0,   117,     0,    51,    35,    36,     0,
      52,    96,    35,    36,    43,    44,    89,    90,    91,    92,
       0,    93,     0,    16,     0,    94,     0,    80,    81,    43,
      44,    82,    83,   119,     0,   120,    84,     0,    35,    36,
      43,    44,   122,   201,   123,    35,    36,    35,    36,   125,
     203,   126,    35,    36,    35,    36,   128,   205,   129,    35,
      36,    35,    36,   131,   207,   132,    35,    36,    35,    36,
     134,   212,   135,    35,    36,    35,    36,   137,   215,   138,
      35,    36,    35,    36,   142,   217,   143,    35,    36,    35,
      36,   145,     0,   146,   156,   154,    35,    36,    35,    36,
     182,   183,   189,   190,    35,    36,    35,    36,   194,   183,
     196,   183,    35,    36,    35,    36,   198,   183,   200,   183,
      35,    36,    35,    36,   202,   183,   204,   183,    35,    36,
      35,    36,   206,   183,   208,   183,    35,    36,    35,    36,
     209,   210,   213,   183,    35,    36,    35,    36,   214,   210,
     216,   183,    35,    36,    35,    36,   218,   183,   221,   210,
      35,    36,    35,    36,   223,   210,     0,     0,    35,    36,
     219,     0,    35,    36,   222,     0,    35,    36,   224,     0,
      35,    36,   227,     0,    35,    36,   229,     0,    35,    36,
     230,     0,    35,    36,   231,     0,    35,    36
  };

  const short int
  VHdc_Parser::yycheck_[] =
  {
      17,    25,    26,    40,    39,    42,    43,    20,    21,    22,
      16,    40,    29,    42,    43,    32,    19,    41,    17,    22,
      23,    38,    25,    26,    18,    28,    39,    30,    41,    42,
      43,    48,    19,    25,    26,    27,    28,    17,    55,    19,
      57,    58,    40,    60,    61,    45,    46,    64,    65,    41,
     107,    68,    69,   110,    46,    51,   113,    74,    75,   116,
      23,    24,   119,    25,    26,   122,    42,    43,   125,    86,
      87,   128,    24,    40,   131,    42,    43,   134,    41,    41,
     137,    -1,   108,    45,    46,   111,    -1,   104,   114,   106,
     131,   117,    25,    26,   120,    -1,    99,   123,    -1,    -1,
     126,   142,    -1,   129,   145,    -1,   132,    -1,    41,   135,
      25,    26,   138,    25,    26,    27,    28,   143,    38,    39,
     146,    -1,    42,    43,   141,    -1,    41,    -1,   154,    41,
      45,    46,   149,    45,    46,    -1,    -1,    29,    30,    31,
     157,    -1,   159,    -1,   161,    37,   163,   150,   165,    41,
     167,    -1,   169,    45,    46,   172,   173,   183,   175,   176,
      37,   178,    39,   180,   190,    42,    43,    37,   185,    39,
     187,    -1,    42,    43,    37,    40,    39,    42,    43,    42,
      43,    -1,     0,    -1,   210,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    29,    30,
      31,    -1,    37,    -1,    39,    -1,    37,    42,    43,    -1,
      41,    41,    42,    43,    45,    46,    32,    33,    34,    35,
      -1,    37,    -1,    41,    -1,    41,    -1,    32,    33,    45,
      46,    36,    37,    37,    -1,    39,    41,    -1,    42,    43,
      45,    46,    37,    40,    39,    42,    43,    42,    43,    37,
      40,    39,    42,    43,    42,    43,    37,    40,    39,    42,
      43,    42,    43,    37,    40,    39,    42,    43,    42,    43,
      37,    40,    39,    42,    43,    42,    43,    37,    40,    39,
      42,    43,    42,    43,    37,    40,    39,    42,    43,    42,
      43,    37,    -1,    39,    38,    39,    42,    43,    42,    43,
      38,    39,    38,    39,    42,    43,    42,    43,    38,    39,
      38,    39,    42,    43,    42,    43,    38,    39,    38,    39,
      42,    43,    42,    43,    38,    39,    38,    39,    42,    43,
      42,    43,    38,    39,    38,    39,    42,    43,    42,    43,
      38,    39,    38,    39,    42,    43,    42,    43,    38,    39,
      38,    39,    42,    43,    42,    43,    38,    39,    38,    39,
      42,    43,    42,    43,    38,    39,    -1,    -1,    42,    43,
      40,    -1,    42,    43,    40,    -1,    42,    43,    40,    -1,
      42,    43,    40,    -1,    42,    43,    40,    -1,    42,    43,
      40,    -1,    42,    43,    40,    -1,    42,    43
  };

  const unsigned char
  VHdc_Parser::yystos_[] =
  {
       0,    48,     0,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    41,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      20,    21,    22,    39,    41,    42,    43,    67,    29,    30,
      31,    37,    41,    45,    46,    68,    69,    70,    29,    30,
      31,    37,    41,    68,    23,    24,    41,    25,    26,    41,
      25,    26,    41,    68,    25,    26,    41,    68,    25,    26,
      27,    28,    41,    70,    25,    26,    27,    28,    41,    68,
      32,    33,    36,    37,    41,    68,    25,    26,    41,    32,
      33,    34,    35,    37,    41,    68,    41,    67,    68,    39,
      67,    66,    67,    16,    62,    67,    62,    37,    39,    67,
      37,    39,    67,    37,    39,    67,    37,    39,    67,    37,
      39,    67,    37,    39,    67,    37,    39,    67,    37,    39,
      67,    37,    39,    67,    37,    39,    67,    37,    39,    67,
      17,    63,    37,    39,    67,    37,    39,    67,    18,    64,
      68,    40,    67,    38,    39,    67,    38,    63,    66,    63,
      66,    63,    66,    63,    66,    63,    66,    63,    66,    63,
      66,    19,    63,    65,    66,    63,    65,    66,    63,    66,
      63,    66,    38,    39,    67,    65,    66,    65,    66,    38,
      39,    67,    68,    66,    38,    40,    38,    40,    38,    40,
      38,    40,    38,    40,    38,    40,    38,    40,    38,    38,
      39,    67,    40,    38,    38,    40,    38,    40,    38,    40,
      66,    38,    40,    38,    40,    66,    40,    40,    66,    40,
      40,    40
  };

  const unsigned char
  VHdc_Parser::yyr1_[] =
  {
       0,    47,    48,    48,    48,    48,    48,    48,    48,    48,
      48,    48,    48,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    49,    50,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    51,    52,    52,    52,    52,    52,
      53,    53,    53,    53,    53,    53,    53,    54,    54,    54,
      54,    54,    54,    54,    54,    55,    55,    55,    55,    55,
      55,    55,    55,    56,    56,    56,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    62,    62,    62,
      63,    63,    63,    64,    64,    64,    65,    65,    65,    66,
      66,    67,    67,    68,    68,    69,    70
  };

  const unsigned char
  VHdc_Parser::yyr2_[] =
  {
       0,     2,     0,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     1,     3,     3,
       6,     4,     2,     1,     3,     2,     2,     2,     4,     1,
       3,     2,     2,     2,     4,     1,     2,     5,     5,     3,
       1,     5,     5,     5,     5,     3,     3,     1,     2,     5,
       5,     5,     5,     3,     3,     1,     2,     5,     5,     5,
       5,     3,     3,     1,     2,     2,     2,     5,     5,     5,
       5,     5,     5,     3,     3,     1,     2,     2,     2,     5,
       5,     5,     5,     3,     3,     1,     2,     2,     2,     2,
       4,     1,     5,     5,     5,     5,     3,     3,     1,     2,
       2,     2,     2,     2,     4,     1,     2,     1,     4,     2,
       1,     4,     2,     1,     4,     2,     1,     4,     2,     0,
       2,     1,     1,     1,     1,     1,     1
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const VHdc_Parser::yytname_[] =
  {
  "\"end-of-file\"", "error", "$undefined", "\"create_clock\"",
  "\"set_clock_groups\"", "\"set_false_path\"", "\"set_max_delay\"",
  "\"set_min_delay\"", "\"set_multicycle_path\"", "\"set_input_delay\"",
  "\"set_output_delay\"", "\"set_clock_uncertainty\"",
  "\"set_clock_latency\"", "\"set_disable_timing\"",
  "\"set_timing_derate\"", "\"current_design\"", "\"get_ports\"",
  "\"get_clocks\"", "\"get_cells\"", "\"get_pins\"", "\"-period\"",
  "\"-waveform\"", "\"-name\"", "\"-exclusive\"", "\"-group\"",
  "\"-from\"", "\"-to\"", "\"-setup\"", "\"-hold\"", "\"-clock\"",
  "\"-max\"", "\"-min\"", "\"-early\"", "\"-late\"", "\"-cell_delay\"",
  "\"-net_delay\"", "\"-source\"", "\"[\"", "\"]\"", "\"{\"", "\"}\"",
  "\"end-of-line\"", "STRING", "ESCAPED_STRING", "CHAR", "FLOAT_NUMBER",
  "INT_NUMBER", "$accept", "sdc_commands", "cmd_create_clock",
  "cmd_set_input_delay", "cmd_set_output_delay", "cmd_set_clock_groups",
  "cmd_set_false_path", "cmd_set_max_delay", "cmd_set_min_delay",
  "cmd_set_multicycle_path", "cmd_set_clock_uncertainty",
  "cmd_set_clock_latency", "cmd_set_disable_timing",
  "cmd_set_timing_derate", "cmd_current_design", "cmd_get_ports",
  "cmd_get_clocks", "cmd_get_cells", "cmd_get_pins", "stringGroup",
  "string", "number", "float_number", "int_number", YY_NULLPTR
  };

#if SDCPARSE_DEBUG
  const unsigned short int
  VHdc_Parser::yyrline_[] =
  {
       0,   177,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   194,   195,   196,
     197,   198,   200,   205,   206,   207,   208,   209,   210,   213,
     214,   215,   216,   217,   218,   221,   222,   223,   224,   225,
     230,   231,   232,   233,   234,   235,   239,   245,   246,   247,
     248,   249,   250,   251,   255,   261,   262,   263,   264,   265,
     266,   267,   272,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   293,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   312,   319,   320,   321,   322,   323,
     324,   328,   329,   330,   331,   332,   333,   338,   345,   346,
     347,   348,   349,   350,   351,   354,   355,   358,   359,   360,
     363,   364,   365,   368,   369,   370,   373,   374,   375,   379,
     380,   382,   383,   386,   387,   390,   393
  };

  // Print the state stack on the debug stream.
  void
  VHdc_Parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  VHdc_Parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // SDCPARSE_DEBUG


#line 34 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:1167
} // sdcparse
#line 2084 "/home/ale/git/VHawk/third_party/sdcparse/gen/sdc_parser.gen.cpp" // lalr1.cc:1167
#line 396 "/home/ale/git/VHawk/third_party/sdcparse/src/sdc_parser.y" // lalr1.cc:1168



void sdcparse::VHdc_Parser::error(const std::string& msg) {
    sdc_error_wrap(callback, lexer.lineno(), lexer.text(), msg.c_str());
}
