
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137) {
    _target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other): AForm(other){
    _target = other._target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other){
    
    if(this == &other)
        return *this;
    AForm::operator=(other);
    _target = other._target;
    return *this;
}


void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
    if (bureaucrat.getGrade() >  getGradeToExecute())
        throw GradeTooLowException();
    else if(!isValid())
        throw isNotSigned();
    std::string filename = _target + "_shrubbery";
    std::ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << "      *♥         *♥               *♥              *♥        *♥  \n";
        outFile << "     ***        ***              ***             ***       *** \n";
        outFile << "    *****      *****            *****           *****     ***** \n";
        outFile << "   *******    *******          *******         *******   ******* \n";
        outFile << "  *********  *********        *********       ********* ********\n";
        outFile << "    |||        |||               |||             |||       |||\n";
        outFile << "    |||        |||               |||             |||       |||\n";
        outFile << "                *                  *                 *             *        \n";
        outFile << "               ***                ***               ***           ***      \n";
        outFile << "              *****              *****             *****         *****    \n";
        outFile << "             *******            *******           *******       *******  \n";
        outFile << "            *********          *********         *********     *********\n";
        outFile << "               |||                |||               |||           |||   \n";
        outFile << "               |||                |||               |||           |||   \n";
        outFile << "                 ♡                    ♡                 ♡             ♡        \n";
        outFile.close();
        std::cout << "File "  << filename << " create!" << std::endl;


    }
}  
