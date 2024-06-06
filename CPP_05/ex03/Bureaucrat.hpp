
#include <string>
#include <iostream>
#include <stdexcept>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m" 
#define ORANGE    "\033[38;5;208m"

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
        void executeForm(AForm const &form);



    class  GradeTooHighException : public std::exception {
                virtual const char* what() const throw(){
                    return BLUE "Grade Too High Exception" RESET;
                }
    };

    class GradeTooLowException : public std::exception {
                virtual const char* what() const throw(){
                    return BLUE "Grade Too Low Exception" RESET ;
                }
    };
};

std::ostream	&operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#include "AForm.hpp"

#endif 