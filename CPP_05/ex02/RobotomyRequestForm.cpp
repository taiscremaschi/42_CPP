
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

    std::cout << "dz dzdzzz dzzzzzzzz dzzzzzZZZZZZZZZZ...." << std::endl;
    if(i % 2 == 0)
        std::cout << _target << " has been robotomized successfully!!" << std::endl;
    else 
        std::cout << _target << " robotomy failed." << std::endl;
}

