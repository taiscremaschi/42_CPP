
#include "Span.hpp"

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
    return 1;

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