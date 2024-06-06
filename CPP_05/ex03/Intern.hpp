
#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern{
    private:

    public:
        Intern();
        ~Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        AForm *makeForm(std::string formName, std::string formTarget);
    
    class  InvalidForm : public std::exception {
        virtual const char* what() const throw(){
            return "Invalid Form";
        }
    };
     
};


#endif