
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45) {
    _target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other)
{
    _target = other._target;

}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    
    if(this == &other)
        return *this;
    AForm::operator=(other);
    _target = other._target;

    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const{
    if (bureaucrat.getGrade() >  getGradeToExecute())
        throw GradeTooLowException();
    else if(!isValid())
        throw isNotSigned();

    static int i;

    std::cout  << RED << "dz dzdzzz dzzzzzzzz dzzzzzZZZZZZZZZZ...."  << RESET << std::endl;
    if(i % 2 == 0)
        std::cout << CYAN << _target << " has been robotomized successfully!!" << RESET << std::endl;
    else 
        std::cout << RED  << _target << " robotomy failed." << RESET << std::endl;
    i++;
}

