
#include "Intern.hpp"


int main()
{
    AForm *form  = NULL;
    try {

        Bureaucrat luke("luke", 1);
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Presidential Pardon", "luke");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Presidential Pardon", "luke");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Robotomy Request", "tata");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Robotomy Request", "tatazinha");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Robotomy Request", "tata");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Shrubbery Creation", "my_first_garden");
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
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("Shrubbery Creation", "my_first_garden");
        tata.signForm(*form);
        form->execute(tata);
        delete form;
    } 
    catch (const std::exception &err) {
        if(form != NULL) 
            delete form;
        std:: cerr << MAGENTA << "ERROR: " << err.what() << RESET <<std::endl;
        std:: cout << "\n\n";

    }

    try{

        Bureaucrat tata("tata", 100);
        Intern someRandomIntern;
        form =  someRandomIntern.makeForm("not exist", "why?");
        tata.signForm(*form);
        form->execute(tata);
        delete form;
    } 
    catch (const std::exception &err) {
        if(form != NULL) 
            delete form;
        std:: cerr << BLUE << "ERROR: " << err.what() << RESET <<std::endl;
    }


}