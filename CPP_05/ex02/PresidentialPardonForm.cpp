
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 145, 137) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other)
{}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
    
    if(this == &other)
        return *this;
    AForm::operator=(other);
    return *this;
}

