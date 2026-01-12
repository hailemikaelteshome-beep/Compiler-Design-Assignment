#include "tokenizer.h"
#include <cctype>

std::vector<Token> tokenize(const std::string& input) {
    std::vector<Token> tokens;

    for (size_t i = 0; i < input.length(); i++) {
        if (isspace(input[i])) continue;

        if (isdigit(input[i])) {
            std::string num;
            while (i < input.length() && isdigit(input[i]))
                num += input[i++];
            i--;
            tokens.push_back({TokenType::NUMBER, num});
        }
        else if (input[i] == '+')
            tokens.push_back({TokenType::PLUS, "+"});
        else if (input[i] == '-')
            tokens.push_back({TokenType::MINUS, "-"});
        else if (input[i] == '*')
            tokens.push_back({TokenType::MULTIPLY, "*"});
    }
    return tokens;
}


