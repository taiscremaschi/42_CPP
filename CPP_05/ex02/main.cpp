#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    AForm *form  = NULL;
    try{

        Bureaucrat luke("luke", 1);
        form = new PresidentialPardonForm("luke");
        std::cout << *form;
        std::cout << luke;
        luke.signForm(*form);
        form->execute(luke);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }

    try{

        Bureaucrat luke("luke invalid", 100);
        form = new PresidentialPardonForm("luke invalid");
        luke.signForm(*form);
        form->execute(luke);
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
        std:: cout << "\n\n";
    }
    try{

        Bureaucrat tata("tata", 1);
        form = new RobotomyRequestForm("tata");
        tata.signForm(*form);
        form->execute(tata);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }
    try{

        Bureaucrat tatazinha("tatazinha", 1);
        form = new RobotomyRequestForm("tatazinha");
        tatazinha.signForm(*form);
        form->execute(tatazinha);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }
    try{

        Bureaucrat tata("tata", 150);
        form = new RobotomyRequestForm("tata");
        tata.signForm(*form);
        form->execute(tata);
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
        std:: cout << "\n\n";
    }
    try{

        Bureaucrat tata("tata", 1);
        form = new ShrubberyCreationForm("my first garden");
        tata.signForm(*form);
        form->execute(tata);
        std:: cout << "\n\n";
        delete form;
    } 
    catch (const std::exception &err) { 
        delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }
    form = NULL;
    try{

        Bureaucrat tata("tata", 0);
        form = new ShrubberyCreationForm("my_first_garden");
        tata.signForm(*form);
        form->execute(tata);
        delete form;
    } 
    catch (const std::exception &err) {
        if(form != NULL) 
            delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
    }

}