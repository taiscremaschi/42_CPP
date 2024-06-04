
#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include <iostream>
#include <stdexcept>

class Form {
    private:
        const std::string _name;
        bool        _signedCheck;
        const int   _gradeToSign;
        const int   _gradeToExecute;

    public:
        Form(std::string const name, const int gradeToSign, const int gradeToExecute);
        ~Form();
        Form(const Form &other);
        Form &operator=(const Form &other);
        std::string getName() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        bool        isValid() const;

    
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

std::ostream	&operator<<(std::ostream &o, const Form &Form);


#endif