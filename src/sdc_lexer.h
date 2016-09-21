#ifndef SDC_LEXER_H
#define SDC_LEXER_H

#include "sdc_parser.h" //For Parser::symbol_type

namespace sdcparse {

typedef void* yyscan_t;

class Lexer {
    public:
        Lexer(FILE* file);
        ~Lexer();
        Parser::symbol_type next_token();
        const char* text() const;
        int lineno() const;
    private:
        yyscan_t state_;
};

/*
 * The YY_DECL is used by flex to specify the signature of the main
 * lexer function.
 *
 * We re-define it to something reasonable
 */
#undef YY_DECL
#define YY_DECL sdcparse::Parser::symbol_type sdcparse_lex(yyscan_t yyscanner)
//extern YY_DECL;

} //namespace
#endif
