
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 145, 137) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm(other)
{}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other){
    
    if(this == &other)
        return *this;
    AForm::operator=(other);
    return *this;
}

