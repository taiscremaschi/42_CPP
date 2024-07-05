
#include "RPN.hpp"

RPN::RPN(char *str) {
     _myStack = splitStack(str);
}

RPN::RPN(const RPN &other) {
    (void)other;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &other){
    (void)  other;
    return *this;
}

std::stack<char>  RPN::splitStack(char *str){
    std::string myStr = str;

    size_t i = 0;
    std::stack<char>  result;
    int start = 0;

    while(myStr[i])
    {
        while(myStr[i] == ' ' || myStr[i] == '\t')
            i++;
        result.push(myStr[i]);   
    }
    return result;
}

