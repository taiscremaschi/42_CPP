
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat myBur("tata", 180);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;

    }

    try{

        Bureaucrat myBur("tatazinha", 0);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;

    }
    try{

        Bureaucrat myBur("tatazizinha", 10);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;

    }
}