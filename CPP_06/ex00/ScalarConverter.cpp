
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

void printChar(int c){
    if(!isprint(c))
        std::cout << "char: " << "is not displayable" <<std::endl;
    else if(c >  127)
        std::cout << "char: " << "is impossible" <<std::endl;
    else 
        std::cout << "char: " << "'" << static_cast <char>(c) <<  "'" <<std::endl; 
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
    float result = strtof(param.c_str(), NULL);
    printChar(static_cast<char>(result));
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
        {
            std::cerr << "ERROR: Invalid parameter " << std::endl;
            return false;
        }
    }
    long long int result = atoll(param.c_str());
    if(result <  INT_MIN || result > INT_MAX) {
        std::cerr << "ERROR: Invalid parameter " << std::endl;
            return false;
    }
    printChar(static_cast<char>(result));
    //std::cout << "char: " << "'" << static_cast<char>(result) <<  "'" <<std::endl;
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
    double result = strtod(param.c_str(), NULL);
    printChar(static_cast<char>(result));
    //std::cout << "char: " << "'" << static_cast<char>(result) <<  "'" <<std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << result << std::endl;
    std::cout << "float: " <<  static_cast<float>(result)<< "f" << std::endl;
    return true;
}
bool ScalarConverter::isChar(std::string &param)
{
    if(param.size() > 1 || param.empty())
    {
        std::cerr << "ERROR: Invalid parameter " << std::endl;
        return false;
    }

    char result = param[0];
    printChar(result);
    //std::cout <<"char: " << "'" << result << "'" << std::endl;
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << std::endl;
    std::cout << "float: " <<  static_cast<float>(result) << "f" << std::endl;

    return true;    
}

bool exception(std::string param){

    if(param == "-inf" || param ==  "-inff") {
        std::cout <<"char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "double: "  << "-inf"<< std::endl;
        std::cout << "float: " <<  "-inf" << "f" << std::endl;
        return true;
    }
    else if(param == "+inff" || param == "+inf"){
         std::cout <<"char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "double: "  << "+inf"<< std::endl;
        std::cout << "float: " <<  "+inf" << "f" << std::endl;
        return true;
    }
    else if(param == "nan" || param == "nanf"){
         std::cout <<"char: " << "impossible" << std::endl;
        std::cout << "int: " << "impossible" << std::endl;
        std::cout << "double: "  << "nan"<< std::endl;
        std::cout << "float: " <<  "nan" << "f" << std::endl;
        return true;
    }
    return false;
}

void ScalarConverter::convert(std::string param){

    if (exception(param)) 
        return;
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
