#ifndef SDTS_H
#define SDTS_H

#include <string>

class Parser {
public:
    Parser(const std::string& input);
    int parse();

private:
    int pos;
    std::string text;

    int E();
    int T();
    int F();
};

#endif
