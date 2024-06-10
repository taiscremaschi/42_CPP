
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
    (void)other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other){
    if(this == &other)
        return *this;
    return *this;
}





void ScalarConverter::convert(std::string &param){

    if(isdigit(param[0]) || param[0] == '-' || param[0] == '+')
    {
        if(param[param.size()-1] == 'f')
        {
            isFloat(param);
            return;
        }
        for(int i = 0; i < param.size(); i++){
            if (param[i] == '.'){
                isDouble(param);
                return;
            }
        }
        isInt(param);
        return;
    }
    isChar(param);
}
