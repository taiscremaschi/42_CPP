
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

