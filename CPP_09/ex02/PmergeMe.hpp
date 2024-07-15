
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <array>
#include <list>

class PmergeMe {
    private:
        std::list<int> _myList;
        std::array<int, 10000> _myArray;
        int _size;
    public:
        PmergeMe(std::array<int, 10000> input, int size);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other); 
        ~PmergeMe();
        std::array<int, 10000> algArray(std::array<int, 10000> arr);
        std::list<int> algList(std::list<int> list);
        std::array<int, 10000> organizeArray();



};






#endif