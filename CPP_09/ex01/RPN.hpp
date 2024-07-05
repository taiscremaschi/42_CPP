#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <stack>
#include <fstream>
#include <stdlib.h>

class  RPN {
    private:
        std::stack<char> _myStack;

    public:
        RPN(char *str);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other); 
        ~RPN();
        std::stack<char> splitStack(char *str);
};


#endif