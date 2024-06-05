
#include <string>
#include <iostream>
#include <stdexcept>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class AForm;
class Bureaucrat {
    private:
        const std::string         _name;
        int                 _grade;


    public:
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        std::string getName() const;
        int         getGrade() const;
        void        signForm(AForm &form);



    class  GradeTooHighException : public std::exception {
                virtual const char* what() const throw(){
                    return "Grade Too High Exception";
                }
    };

    class GradeTooLowException : public std::exception {
                virtual const char* what() const throw(){
                    return "Grade Too Low Exception";
                }
    };
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#include "AForm.hpp"

#endif 