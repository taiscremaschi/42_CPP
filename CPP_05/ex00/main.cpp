
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat myBur("tata invalid", 180);
        std::cout << myBur;
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << RESET << err.what() << std::endl;

    }
    try{

        Bureaucrat myBur("tatazinha invalid", 0);
        std::cout << myBur;

    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << RESET <<  err.what() << std::endl;

    }
    try{

        Bureaucrat myBur("tata", 10);
        std::cout << myBur;
    } 
    catch (const std::exception &err) { 
        std:: cerr << MAGENTA << "ERROR: " << RESET <<  err.what() << std::endl;
    }
}