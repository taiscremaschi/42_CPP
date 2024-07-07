
#include "RPN.hpp"

RPN::RPN() {
}

RPN::RPN(const RPN &other) {
    (void)other;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN &other){
    (void)  other;
    return *this;
}

void  RPN::run(char *str){
    size_t i = 0;
    int result = 0;

    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        if(str[i] > '0' && str[i] < '9')
        {
            if((str[i + 1]) && (str[i + 1] != ' ' && str[i + 1] != '\t'))
                throw std::invalid_argument("cuzin Error.");
            _myStack.push(str[i] - '0');
        }
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            if(_myStack.size() < 2)
                throw std::invalid_argument("size Error.");
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
        }
        i++;
    }

    std::cout << _myStack.top() << std::endl;
}

