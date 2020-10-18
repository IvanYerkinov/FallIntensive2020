#include <iostream>
#include "lexer.h"

using namespace std;

int main()
{
    auto a = Lexer::readTokenFile("test.txt");

    //Lexer::readTokenList(a);

    Lexer::readFuncList(Lexer::parseTokens("test.txt"));
    return 0;
}
