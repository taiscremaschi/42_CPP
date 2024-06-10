

#include "Array.hpp" 
#include <iostream>


int main()
{ 
    Array<std::string> b(2);
    std::cout << "my size is " << b.size() <<  "\n" << std::endl;
    try{ 
        b[0] = "tata";
        b[1] = "tatazinha";
        b[2] = "BUM!";
    }
    catch (const std::exception &err){
        std:: cerr << "ERROR: " << err.what()  <<std::endl;
    }

    std::cout <<  "\n" << b[0] << std::endl;
    std::cout <<  b[1] << std::endl;

}