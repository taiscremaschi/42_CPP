
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

