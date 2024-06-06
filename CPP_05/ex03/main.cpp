
#include "Intern.hpp"


int main()
{
    try {

        Intern someRandomIntern;
        AForm*  rrf =  someRandomIntern.makeForm("Robotomy Request", "Bender");
        delete rrf;
    }
    catch (const std::exception &err) {
        std::cerr << "Error: " << err.what() << std::endl;
    }
}