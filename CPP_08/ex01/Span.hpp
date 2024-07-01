
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span {
    private:


    public:
        Span(unsigned int nbr);
        ~Span();
        Span(unsigned int other);
        Span(const Span &other); //copy constructor
        Span &operator=(const Span &other); 
};


#endif