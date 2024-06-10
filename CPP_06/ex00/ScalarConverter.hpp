
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>

class ScalarConverter {
    private:
        ScalarConverter(); 
        ScalarConverter(const ScalarConverter &other); 
        ~ScalarConverter(); 
        ScalarConverter &operator=(const ScalarConverter &other);
    public:
        static void convert(std::string &literal);

};



#endif