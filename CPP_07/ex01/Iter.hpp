#ifndef ITER_HPP
#define ITER_HPP



#include <iostream>
#include <string>

template <typename T>
void iter(T *address, size_t lenght, void(*func)(T&))
{
    for (size_t i = 0; i < lenght; ++i){
        func(address[i]);
    }
}

#endif