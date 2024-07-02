
#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
    private:

    public:
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack &other);
        MutantStack &operator=(const MutantStack &other); 
        typedef typename std::deque<T>::iterator iterator;
};

template<typename T>
MutantStack<T>::MutantStack() : std::stack<T> {}

template<typename T>
MutantStack<T>::~MutantStack(){}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack &other) : std::stack(other) {}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &other){
    if(this == &other)
        return *this;
    std::stack::operator=(other);
    return *this;
}



#endif