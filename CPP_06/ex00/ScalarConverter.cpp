
#include "ScalarConverter.hpp"
#include <limits>


#define MAX_DOUBLE std::numeric_limits<double>::max()
#define MAX_FLOAT std::numeric_limits<float>::max()

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

int getPrecision(std::string nbr){
    size_t posi =  nbr.find('.');
    if(posi == std::string::npos)
        return 1;
    if(posi == nbr.length() -1 || nbr[nbr.size()-2] == '.' )
        return 1;
    if(nbr[nbr.size()-1] == 'f')
        return(nbr.length()- posi - 2);
    return(nbr.length()-posi - 1);
}

void printChar(double c){
    if(c >  127)
        std::cout << "char: " << "is impossible" <<std::endl;
    else if(!isprint(c))
        std::cout << "char: " << "is not displayable" <<std::endl;
    else 
        std::cout << "char: " << "'" << static_cast <char>(c) <<  "'" <<std::endl; 
}

template <typename T>
std::string convertToString(T value, int precision)
{
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(precision) << value;
    return oss.str();
}
    
bool ScalarConverter::isFloat(std::string &param)
{
    int flagF = 0;
    bool flagP = false;

    for(size_t i = 0; i < param.size(); i++)
    {
        if(param[0] == '-' || param[0] == '+')
            continue;
        if(param[i] == 'f' && flagF == 0) {
            flagF = 1;
            continue ;
        }
        if(isalpha(param[i])){
            std::cerr << "ERROR: Invalid parameter " << std::endl;
           return false;
        }
        if(param[i] == '.')
        {
            if(!flagP)
            {
                flagP = true;
                continue;
            }
            else
            {
                std::cerr << "ERROR: Invalid parameter " << std::endl;
                return false;
            }
        }
        if(isalnum(param[i]))
            continue;
        else 
        {
            std::cerr << "ERROR: Invalid parameter " << std::endl;
            return false;
        }
    }
    
    double result = strtod(param.c_str(), NULL);
    int precision = getPrecision(param);
    std::cout << std::fixed << std::setprecision(precision);
    printChar(result);
    if(result <  INT_MIN || result > INT_MAX) 
        std::cout << "int: " << "impossible" << std::endl;
    else 
        std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << std::endl;
    if (result > MAX_FLOAT)
        std::cout << "float: impossible " << std::endl;
    else
        std::cout << "float: " <<  static_cast<float>(result) << "f" << std::endl;
    return true;
}

bool ScalarConverter::isInt(std::string &param)
{
    for(std::size_t i = 0; i < param.size(); ++i)
    {
        if(param[0] == '-' || param[0] == '+')
            continue;
        if(!isdigit(param[i]))
        {
            std::cerr << "ERROR: Invalid parameter " << std::endl;
            return false;
        }
    }
    long long int result = atoll(param.c_str());
    printChar(static_cast<long long int>(result));
    std::cout << "int: " << result << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << ".0" << std::endl;
    std::cout << "float: " <<  static_cast<float>(result) << ".0f" << std::endl;
    return true;

}

bool ScalarConverter::isDouble(std::string &param)
{
    bool flagP = false;
    for(size_t i = 0; i < param.size(); i++)
    {
        if(param[0] == '-' || param[0] == '+')
            continue;
        if(isalpha(param[i])){
            std::cerr << "ERROR: Invalid parameter " << std::endl;
           return false;
        }
        if(param[i] == '.')
        {
            if(!flagP){
                flagP = true;
                continue;
            }
            else{
            std::cerr << "ERROR: Invalid parameter " << std::endl;
           return false;
        }
        }
        if(isalnum(param[i]))
            continue;
        else {
            std::cerr << "ERROR: Invalid parameter " << std::endl;
            return false;
        }
    }
    
    double result = strtod(param.c_str(), NULL);
    int precision = getPrecision(param);
    std::cout << std::fixed << std::setprecision(precision);
    printChar(result);
    if(result <  INT_MIN || result > INT_MAX) {
        std::cout << "int: " << "impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(result) << std::endl;
    }
    std::cout << "double: "  << result << std::endl;
    if (result > MAX_FLOAT)
        std::cout << "float: impossible " << std::endl;   
    else
        std::cout << "float: " <<  static_cast<float>(result) << "f" << std::endl;
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
    std::cout << "int: " << static_cast<int>(result) << std::endl;
    std::cout << "double: "  << static_cast<double>(result) << ".0" << std::endl;
    std::cout << "float: " <<  static_cast<float>(result) << ".0f" << std::endl;

    return true;    
}

void ScalarConverter::convert(std::string param){
    long long int result  = atoll(param.c_str());
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
            if (param[i] == '.' || result > INT_MAX || result < INT_MIN){
                isDouble(param);
                return;
            }
        }
        isInt(param);
        return;
    }
    isChar(param);
}
