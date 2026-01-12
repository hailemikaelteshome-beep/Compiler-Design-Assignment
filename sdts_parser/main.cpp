#include "sdts.h"
#include <iostream>
#include <cctype>

Parser::Parser(const std::string& input) : text(input), pos(0) {}

int Parser::parse() {
    return E();
}

int Parser::E() {
    int value = T();
    while (pos < text.size() && (text[pos] == '+' || text[pos] == '-')) {
        char op = text[pos++];
        int t = T();
        value = (op == '+') ? value + t : value - t;
    }
    return value;
}

int Parser::T() {
    int value = F();
    while (pos < text.size() && text[pos] == '*') {
        pos++;
        value *= F();
    }
    return value;
}

int Parser::F() {
    while (isspace(text[pos])) pos++;
    if (isdigit(text[pos])) {
        int val = 0;
        while (pos < text.size() && isdigit(text[pos]))
            val = val * 10 + (text[pos++] - '0');
        return val;
    }
    return 0;
}

int main() {
    std::string expr;
    std::cout << "Enter expression: ";
    std::getline(std::cin, expr);

    Parser p(expr);
    std::cout << "Result: " << p.parse() << std::endl;
}
