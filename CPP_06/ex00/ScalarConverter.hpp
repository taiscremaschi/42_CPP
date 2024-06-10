
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits.h>
#include <stdlib.h>
#include <exception>

class ScalarConverter {
    private:
        ScalarConverter(); 
        ScalarConverter(const ScalarConverter &other); 
        ~ScalarConverter(); 
        ScalarConverter &operator=(const ScalarConverter &other);
       static bool isInt(std::string &param);
       static bool isDouble(std::string &param);
       static bool isChar(std::string &param);
       static bool isFloat(std::string &param);

    public:
        static void convert(std::string literal);

};



#endif