#ifndef SDC_LEXER_HPP
#define SDC_LEXER_HPP

#include "sdc_parser.hpp" //For VHdc_Parser::symbol_type

namespace vhdcparse {

typedef void* yyscan_t;

class VHdc_Lexer {
    public:
        VHdc_Lexer(FILE* file, Callback& callback);
        ~VHdc_Lexer();
        VHdc_Parser::symbol_type next_token();
        const char* text() const;
        int lineno() const;
    private:
        yyscan_t state_;
        Callback& callback_;
};

/*
 * The YY_DECL is used by flex to specify the signature of the main
 * lexer function.
 *
 * We re-define it to something reasonable
 */
#undef YY_DECL
#define YY_DECL vhdcparse::VHdc_Parser::symbol_type sdcparse_lex(yyscan_t yyscanner, vhdcparse::Callback& callback)

} //namespace
#endif
