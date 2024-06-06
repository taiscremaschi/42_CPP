
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5) {
    _target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other)
{
    _target = other._target;

}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    
    if(this == &other)
        return *this;
    AForm::operator=(other);
    _target = other._target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const{
     if (bureaucrat.getGrade() >  getGradeToExecute())
        throw GradeTooLowException();
    else if(!isValid())
        throw isNotSigned();
    std::cout << MAGENTA  << _target << " has been pardoned by Zaphod Beeblebrox." << RESET << std::endl;

}


