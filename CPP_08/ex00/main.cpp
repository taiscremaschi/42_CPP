
#include "easyfind.hpp"


int main()
{
    std::vector<int> i;
    i.push_back(100);
    i.push_back(0);
    i.push_back(20);
    i.push_back(-1);
    i.push_back(200);
    i.push_back(42);
    i.push_back(50);
    i.push_back(2000); 

    try {
        easyfind(i, 80);
        std:: cout << "my position in container is " << easyfind(i, 80) << std::endl;   
    }
    catch (const std::exception &err) 
    {
        std:: cerr << "ERROR: " << err.what() <<std::endl;

    }
    try {
        easyfind(i, 42); 
        std:: cout << "my position in container is " << easyfind(i, 42) << std::endl;   
    }
    catch (const std::exception &err) 
    {
        std:: cerr << "ERROR: " << err.what() <<std::endl;

    }
}