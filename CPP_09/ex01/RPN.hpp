#ifndef RPN_HPP
#define RPN_HPP


#include <iostream>
#include <stack>
#include <string.h>
#include <fstream>
#include <stdlib.h>

class  RPN {
    private:
        std::stack<int> _myStack;

    public:
        RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other); 
        ~RPN();
        void run(char *s);
};


#endif