
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <array>

class PmergeMe {
    private:

    public:
        PmergeMe(std::array<int, 10000> input);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other); 
        ~PmergeMe();


};






#endif