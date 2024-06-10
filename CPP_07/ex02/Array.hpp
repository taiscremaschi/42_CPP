
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
        unsigned int size() const;
        T& operator[](std::size_t idx); 
        const T& operator[](std::size_t idx)  const;

};

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

    delete [] other._elements;
    _n = other._n;
    for(unsigned int i = 0; i < _n; ++i)
    {
        _elements[i] = other._elements[i];
    } 
    return *this;
}

template <typename T>
unsigned int Array<T>::size() const {
    return _n;
}



template <typename T>
T& Array<T>::operator[](std::size_t idx) {  
    if (idx >= _n)
    {
        throw std::invalid_argument("Array index out of range");
    }
    return _elements[idx];
}

template <typename T>
const T& Array<T>::operator[](std::size_t idx) const {  
    if (idx >= _n)
    {
        throw std::invalid_argument("Array index out of range");
    }
    return _elements[idx];
}

#endif