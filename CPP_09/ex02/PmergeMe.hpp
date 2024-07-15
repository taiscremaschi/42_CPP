
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <list>
#include <deque>

class PmergeMe {
    private:
        std::list<int> _myList;
        std::deque<int> _myDeque;
    public:
        PmergeMe(std::list<int> input);
        PmergeMe(const PmergeMe &other);
        PmergeMe &operator=(const PmergeMe &other); 
        ~PmergeMe();
        std::deque<int> algDeque(std::deque<int> deque);
        std::list<int> algList(std::list<int> list);
        std::list<int> handleMergeList(std::list<int> list, std::list<int> list2);
        std::deque<int> handleMergeDeque(std::deque<int> deque, std::deque<int> deque2);

};

#endif