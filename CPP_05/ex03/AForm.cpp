
#include "AForm.hpp"

AForm::AForm(std::string const name, const int gradeToSign, const int gradeToExecute)
: _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _signedCheck(false)
{
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

AForm::AForm(const AForm &other)
: _name(other._name), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute), _signedCheck(other._signedCheck)
{
}

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other)
{
    if(this == &other)
        return *this;
    _signedCheck = other._signedCheck;
    return *this;
}

std::string AForm::getName() const
{
    return _name;
}

int AForm::getGradeToSign() const {
    return _gradeToSign;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}


bool    AForm::isValid() const {

    return _signedCheck;
}


void        AForm::beSigned(Bureaucrat &bureaucrat){
    if(bureaucrat.getGrade() > _gradeToSign)
        throw GradeTooLowException();
    _signedCheck = true;
} 

std::ostream& operator<<(std::ostream& os, const AForm &AForm){
    os << GREEN << "AForm " << AForm.getName() << " needs note " << AForm.getGradeToSign() <<  " to be signed and note " << AForm.getGradeToExecute() << " to be executed. Therefore, it is "  << AForm.isValid() << "!" <<  RESET << std::endl;
    return os;
}