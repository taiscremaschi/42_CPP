
#include "Intern.hpp"


int main()
{
    Intern someRandomIntern;
    AForm*  rrf =  someRandomIntern.makeForm("Robotomy Request", "Bender");

    delete rrf;
}