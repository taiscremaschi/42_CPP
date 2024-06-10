
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
    float result = std::strtof(param.c_str(), NULL);
    std::cout << "char: " << "'" << static_cast<char>(result) <<  "'" <<std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << std::endl;
    std::cout << "float: " <<  result << "f" << std::endl;
    return true;
}

bool ScalarConverter::isInt(std::string &param)
{
    for(std::size_t i = 0; i < param.size(); ++i)
    {
        if(param[0] == '-' || param[i] == '+')
            continue;
        if(!isdigit(param[i]))
            return false;
    }
    
    long int result = atoi(param.c_str());
    if(result  < INT_MIN || result > INT_MAX)
        return false;
    std::cout << "char: " << "'" << static_cast<char>(result) <<  "'" <<std::endl;
    std::cout << "int: " << result << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << std::endl;
    std::cout << "float: " <<  static_cast<float>(result) << "f" << std::endl;
    return true;

}
bool ScalarConverter::isDouble(std::string &param)
{
    bool flagP = false;
    for(size_t i = 0; i < param.size(); i++)
    {
        if(param[0] == '-' || param[i] == '+')
            continue;
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
    double result = std::strtod(param.c_str(), NULL);
    std::cout << "char: " << "'" << static_cast<char>(result) <<  "'" <<std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << result << std::endl;
    std::cout << "float: " <<  static_cast<float>(result)<< "f" << std::endl;
    return true;
}
bool ScalarConverter::isChar(std::string &param)
{
    if(param.size() > 1 || param.empty() || !isprint(param[0]))
        return false;

    char result = param[0];

    std::cout <<"char: " << "'" << result << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << std::endl;
    std::cout << "float: " <<  static_cast<float>(result) << "f" << std::endl;

    return true;    
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
