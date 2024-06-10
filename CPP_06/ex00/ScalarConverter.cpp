
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


bool ScalarConverter::isFloat(std::string &param)
{
    std::cout << "chegou <\n";
    int flagF = 0;
    bool flagP = false;
    for(size_t i = 0; i < param.size(); i++)
    {
        if(param[0] == '-' || param[i] == '+')
            continue;
        if(param[i] == 'f' && flagF == 0) {
            flagF = 1;
            continue ;
        }
        if(isalpha(param[i]))
           return false;
        if(param[i] == '.')
        {
            if(!flagP){
                flagP = true;
                continue;
            }
            else
                return false;
        }
        if(isalnum(param[i]))
            continue;
        else 
            return false;
    }
    float result = std::stof(param);
    std::cout << " chegou no true" << std::endl;
    std::cout << " char:: " << static_cast<char>(result) << std::endl;
    std::cout << " int " << static_cast<int>(result) << std::endl;
    std::cout << " double "  << static_cast<double>(result)<< std::endl;
    std::cout << " float " << result << "f" << std::endl;

    return true;
}

bool ScalarConverter::isInt(std::string &param)
{
    (void)param;
    return false;
}
bool ScalarConverter::isDouble(std::string &param)
{
    (void)param;
    return false;


}
bool ScalarConverter::isChar(std::string &param)
{
    (void)param;
    return false;


}



void ScalarConverter::convert(std::string param){

    if(isdigit(param[0]) || param[0] == '-' || param[0] == '+')
    {
        if(param[param.size()-1] == 'f')
        {
            isFloat(param);
            return;
        }
        for(size_t i = 0; i < param.size(); i++){
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
