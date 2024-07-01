
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>

class Span {
    private:
        unsigned int _nbr;
        std::vector<int> _vecNbr;

    public:
        Span(unsigned int nbr);
        ~Span();
        Span(const Span &other);
        Span &operator=(const Span &other); 
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        
        class fullVec : public std::exception {
            virtual const char* what() const throw(){
                return "The container is full";      
            }
        };
        class errorVec : public std::exception {
            virtual const char* what() const throw(){
                return "The container is empty or just has one parameter";      
            }
        };
};


#endif