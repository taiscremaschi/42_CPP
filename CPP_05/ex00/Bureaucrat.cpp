
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade) {
    _name = name;

    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
 
 }

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    _name = other._name;
    _grade = other._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    
    if(this == &other)
        return *this;
    this->_name = other._name;
    this->_grade = other._grade;
    return *this;
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat &Bureaucrat){
    os << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << std::endl;
    return os;
}