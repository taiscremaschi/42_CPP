
#include "Intern.hpp"


Intern::Intern(){}

Intern::Intern(const Intern &other) {
    (void) other;
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other)
{
    if(this == &other)
        return *this;
    return *this;
}

AForm *Intern::makeForm(std::string formName, std::string formTarget){

    std::string array[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
    int i = 0;
    for(; i < 3; i++){
        if(formName == array[i])
            break;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates form Shrubbery" << std::endl;
            return (new ShrubberyCreationForm(formTarget));
        case 1:
            std::cout << "Intern creates form Robotomy Request" << std::endl;
            return (new RobotomyRequestForm(formTarget));
        case 2:
            std::cout << "Intern creates form Presidential Pardon" << std::endl;
            return (new PresidentialPardonForm(formTarget));
        default:
            throw InvalidForm();
    }
}


