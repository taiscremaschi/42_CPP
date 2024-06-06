#include "B.hpp"
#include "A.hpp"
#include "C.hpp"
#include <cstdlib> 
#include <ctime> 
#include <string>
#include <iostream>


void identify(Base& p){
   try {
        A &result= dynamic_cast<A&>(p);
        (void)result;
        std::cout << "type is A" << std::endl;
        return;
   } catch (const std::exception&) {}

    try {
        B &result = dynamic_cast<B&>(p);
        (void)result;
        std::cout << "type is B" << std::endl;
        return;
    } catch (const std::exception&) {}
    try {
        C &result = dynamic_cast<C&>(p);
        (void)result;
        std::cout << "type is C" << std::endl;
        return;
    } catch (const std::exception&) {}

    std::cout << "type is wrong" << std::endl;
}

void identify(Base* p){

    Base *result = NULL;
    result = dynamic_cast<A*>(p);
    if(result){
        std::cout << "type is A" << std::endl;
        return;
    }
    result = dynamic_cast<B*>(p);
    if(result){
        std::cout << "type is B" << std::endl;
        return;
    }
    result = dynamic_cast<C*>(p);
    if(result){
        std::cout << "type is C" << std::endl;
        return;
    }
    std::cout << "type is wrong" << std::endl;
}

Base *generate(void)
{
    std::srand(std::time(0));
    int randomNbr = (std::rand() % 3) + 1;
    switch (randomNbr)
    {
    case 1:
        return  new A();
    case 2:
        return new B();
    case 3:
        return new C();
    default:
        return NULL;
    }
}
int main()
{

    Base *result1 = generate();
    identify(result1);
    identify(*result1);



}