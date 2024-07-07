
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



void  RPN::splitStack(char *str){
    size_t i = 0;
    int start = 0;
    int result = 0;

    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if(str[i] > '0' && str[i] < '9')
            _myStack.push(str[i] - '0');
        else
        {
            result = _myStack.top();
            _myStack.pop();
            if(str[i] == '+')
                result +=  _myStack.top();
            else if(str[i] == '-')
                result -=  _myStack.top();
            else if(str[i] == '*')
                result *=  _myStack.top();
            else if(str[i] == '/')
                result /=  _myStack.top();
            _myStack.pop();
            _myStack.push(result);
            i++;
        }
    }
}

long int RPN::run(){
    
    for(size_t i = 0; i < _myStack.size(); i++){
        
        


    }


}
