#include "Array.hpp"


template <typename T>
Array<T>::Array(): _elements(NULL), _n(0) {
}

template <typename T>
Array<T>::Array(unsigned int n) {
    _n = n;
    _elements = new T[n];
}

template <typename T>
Array<T>::Array(const Array& other)
{
    _n = other._n;
    _elements = new T[other._n];
    for(unsigned int i = 0; i < _n; ++i)
    {
        _elements[i] = other._elements[i];
    } 
}

template <typename T>
Array<T>::~Array() 
{
    delete[] _elements;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other) {
    if (this == &other)
        return *this; 
    _n = other._n;
    return *this;
   
}


