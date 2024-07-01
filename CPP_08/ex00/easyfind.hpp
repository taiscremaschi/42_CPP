
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

class errorParam : public std::exception {
    virtual const char* what() const throw(){
        return "The int is not in the container ";
    }
    };

template <typename T> 
int easyfind(T cont, int param)
{
    for (size_t i = 0; i < cont.size(); i++)
    {
        if(cont[i] == param)
            return i;
    }
    throw (errorParam());
}

#endif
