
#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try{

        Bureaucrat tata("tata", 100);
        Form form1("myform", 10, 10);
        tata.signForm(form1);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;
    }

    try{

        Bureaucrat tatazinha("tatazinha", 10);
        Form form2("myform", 10, 10);
        tatazinha.signForm(form2);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;
    }
    try{

        Bureaucrat tata("tata", 100);
        Form form1("myform", 10, 10);
        form1.beSigned(tata);
    } 
    catch (const std::exception &err) { 
        std:: cerr << "ERROR: " << err.what() << std::endl;
    }


}