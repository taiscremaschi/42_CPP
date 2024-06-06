
#include "Form.hpp"

Form::Form(std::string const name, const int gradeToSign, const int gradeToExecute)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signedCheck(false)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other)
: _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _signedCheck(other._signedCheck)
{}

Form::~Form() {}

Form &Form::operator=(const Form &other)
{
    if(this == &other)
        return *this;
    _signedCheck = other._signedCheck;
    return *this;
}

std::string Form::getName() const
{
    return _name;
}

int Form::getGradeToSign() const {
    return _gradeToSign;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}


bool    Form::isValid() const {

    return _signedCheck;
}


void        Form::beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signedCheck = true;
} 

std::ostream& operator<<(std::ostream& os, const Form &Form){
    os <<  GREEN << "Form " << Form.getName() << " needs note " << Form.getGradeToSign() <<  " to be signed and note " << Form.getGradeToExecute() << " to be executed. Therefore, it is "  << Form.isValid() << "!" << RESET << std::endl;
    return os;
}