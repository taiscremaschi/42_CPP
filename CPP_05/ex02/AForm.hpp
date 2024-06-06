
#ifndef AFORM_HPP
#define AFORM_HPP


#include <string>
#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class AForm {
    private:
        const std::string _name;
        const int   _gradeToSign;
        const int   _gradeToExecute;
        bool        _signedCheck;

    public:
        AForm(std::string const name, const int gradeToSign, const int gradeToExecute);
        virtual ~AForm();
        AForm(const AForm &other);
        AForm &operator=(const AForm &other);
        std::string getName() const;
        virtual int         getGradeToSign() const;
        virtual int         getGradeToExecute() const;
        virtual bool        isValid() const;
        virtual void        beSigned(Bureaucrat &bureaucrat);
        virtual void execute(const Bureaucrat &bureaucrat) const = 0;

    
    class  GradeTooHighException : public std::exception {
            virtual const char* what() const throw(){
                return BLUE "Grade Too High Exception" RESET;
            }
    };

    class GradeTooLowException : public std::exception {
            virtual const char* what() const throw(){
                return  BLUE "Grade Too Low Exception" RESET;
            }
    };
    class isNotSigned : public std::exception {
            virtual const char* what() const throw(){
                return RED "The Form is not signed" RESET;
            }
    };

};

std::ostream	&operator<<(std::ostream &o, const AForm &Form);


#endif