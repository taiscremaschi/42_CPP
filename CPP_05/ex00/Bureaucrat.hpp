
#include <string>
#include <iostream>
#include <stdexcept>

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class  GradeTooHighException : public std::exception {



};

class GradeTooLowException : public std::exception {
    
};


class Bureaucrat {
    private:
        std::string const   _name;
        int                 _grade;


    public:
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        std::string getName();
        int         getGrade();
        bool        checkGrade(int grade);


};

#endif