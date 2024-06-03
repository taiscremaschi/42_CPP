
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade) {
    _name = name;
    if(checkGrade(grade))
    

}



bool Bureaucrat::checkGrade(int grade){

    if(grade < 1 || grade > 150)
        return false;
    return true;
}