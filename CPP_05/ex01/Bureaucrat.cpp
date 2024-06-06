
#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name){
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
 
 }

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name)
{
    _grade = other._grade;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other){
    
    if(this == &other)
        return *this;
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

void        Bureaucrat::signForm(Form &form)
{
    try {
        form.beSigned(*this);
        std::cout << CYAN << _name << " signed " << form.getName()  << RESET << std::endl;
    }
    catch (const std::exception &reason)
    {
        std::cerr << RED << _name << " couldn’t sign " << form.getName() << " because "  << reason.what() << RESET << std::endl;
    }

}

std::ostream& operator<<(std::ostream& os, const Bureaucrat &Bureaucrat){
    os << ORANGE <<Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << RESET << std::endl;
    return os;
}