#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <stack>
#include <fstream>
#include <stdlib.h>

class  RPN {
    private:
        std::stack<int> _myStack;

    public:
        RPN(char *str);
        RPN(const RPN &other);
        RPN &operator=(const RPN &other); 
        ~RPN();
        void splitStack(char *str);
        long int run();
};


#endif