
#ifndef ARRAY_HPP
#define ARRAY_HPP


#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private:
        T *_elements;
        unsigned int _n;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array& other);
        ~Array();
};




#endif