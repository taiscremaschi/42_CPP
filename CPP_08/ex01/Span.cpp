
#include "Span.hpp"
#include <limits.h>

Span::Span(unsigned int nbr): _nbr(nbr) {
    
    std:: cout << "this is constructor" << std::endl;
  
}

Span::Span(const Span &other)
{
    std:: cout << "this is constructed copy" << std::endl;
    _nbr = other._nbr;
}

Span::~Span() {
    std:: cout << "this is desconstructor" << std::endl;
}

Span &Span::operator=(const Span &other){
    
    std:: cout << "this is assigment operator" << std::endl;
    if(this == &other)
        return *this;
    _nbr = other._nbr;
    return *this;
}

void    Span::addNumber(int n){
    if(_vecNbr.size() < _nbr)
        _vecNbr.push_back(n);
    else 
        throw (fullVec());
}

int Span::shortestSpan(){

    if(!_vecNbr[0] || _vecNbr.size() < 2)
        throw (errorVec());
    int tmp = INT_MAX;
    for(size_t i=0; i <_vecNbr.size(); ++i){
        int nbr = _vecNbr[i];
        for(size_t x= i + 1; x <_vecNbr.size(); ++x){
             int result;
            if(_vecNbr[x] > nbr)
               result = _vecNbr[x] - nbr;
            else
             result = nbr - _vecNbr[x];
            if(result < tmp)
                tmp = result;
        }   
    }
    return tmp;
}

int Span::longestSpan(){
    
    if(!_vecNbr[0] || _vecNbr.size() < 2)
        throw (errorVec());

    int min = _vecNbr[0];
    int max = _vecNbr[0];
    for(size_t i=0; i <_vecNbr.size(); ++i){
        if(min > _vecNbr[i])
            min = _vecNbr[i];
        if(max < _vecNbr[i])
            max = _vecNbr[i];
    }
    return (max - min);
}

void Span::randomSpan(unsigned int n){
    
    unsigned int tmp = n;
    srand(time(0));
    while(tmp > 0){
        _vecNbr.push_back(rand() % 100);
        tmp--;
    }
    for(size_t i = 0; i < _vecNbr.size(); i++)
    {
        std::cout << _vecNbr[i] << std::endl;
    }


}
