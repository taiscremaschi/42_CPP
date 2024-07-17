
#include "PmergeMe.hpp"
#include <iomanip>

PmergeMe::PmergeMe(std::list<int> input){
    _timeDeque = 0;
    _timeList = 0;
    struct timeval start, end;

    for(std::list<int>::iterator it = input.begin(); it != input.end(); ++it){
        _myDeque.push_back(*it);
        _myList.push_back(*it);
        _myInput.push_back(*it);
    }

    gettimeofday(&start, NULL);
    _myList = algList(_myList);
    gettimeofday(&end, NULL);
    double microseconds = end.tv_usec - start.tv_usec;
    _timeList = microseconds;
    gettimeofday(&start, NULL);
    _myDeque = algDeque(_myDeque);
    gettimeofday(&end, NULL);
    microseconds = end.tv_usec - start.tv_usec;
    _timeDeque = microseconds;

}

PmergeMe::PmergeMe(const PmergeMe &other) {
    (void)other;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
    (void)  other;
    return *this;
}


std::deque<int> PmergeMe::handleMergeDeque(std::deque<int> deque, std::deque<int> deque2){
    std::deque<int> result;
    std::deque<int>::iterator first = deque.begin();
    std::deque<int>::iterator first2 = deque2.begin();


    while(first != deque.end() && first2 != deque2.end()){
        if(*first < *first2){
            result.push_back(*first);
            first++;
        }
        else{
            result.push_back(*first2);
            first2++;
        }
    }
    while (first != deque.end()){
        result.push_back(*first);
        first++;

    }
    while( first2 != deque2.end()){
        result.push_back(*first2);
        first2++;
    }
    return result;
}

std::deque<int> PmergeMe::algDeque(std::deque<int> deque){
    
    int swap = 0;
  
    if(deque.size() < 3){
        if (deque.size() < 2)
            return deque;
        std::deque<int>::iterator firstNbr = deque.begin();
        std::deque<int>::iterator secondNbr = firstNbr;
        std::advance(secondNbr, 1);
        if(*firstNbr > *secondNbr){
            swap = *firstNbr;
            *firstNbr = *secondNbr;
            *secondNbr = swap;
        }
        return deque;
    }
    std::deque<int>::iterator it = deque.begin();
    std::advance (it, deque.size() / 2);
    std::deque<int> left(deque.begin(), it);
    std::deque<int> right(it, deque.end());
    
    std::deque<int>  result = algDeque(left);
    std::deque<int>  result2 = algDeque(right);
    std::deque<int>  result3 = handleMergeDeque(result, result2); 
    return result3;
}


std::list<int> PmergeMe::handleMergeList(std::list<int> list, std::list<int> list2){
    std::list<int> result;
    std::list<int>::iterator first = list.begin();
    std::list<int>::iterator first2 = list2.begin();


    while(first != list.end() && first2 != list2.end()){
        if(*first < *first2){
            result.push_back(*first);
            first++;
        }
        else{
            result.push_back(*first2);
            first2++;
        }
    }
    while (first != list.end()){
        result.push_back(*first);
        first++;
    }
    while( first2 != list2.end()){
        result.push_back(*first2);
        first2++;
    }
    return result;
}

std::list<int> PmergeMe::algList(std::list<int> list){

    int swap = 0;

    if(list.size() < 3){
        if (list.size() < 2)
            return list;
        std::list<int>::iterator firstNbr = list.begin();
        std::list<int>::iterator secondNbr = firstNbr;
        std::advance(secondNbr, 1);
        if(*firstNbr > *secondNbr){
            swap = *firstNbr;
            *firstNbr = *secondNbr;
            *secondNbr = swap;
        }
        return list;
    }
    std::list<int>::iterator it = list.begin();
    std::advance (it, list.size() / 2);
    std::list<int> left(list.begin(), it);
    std::list<int> right(it, list.end());

    std::list<int>  result = algList(left);
    std::list<int>  result2 = algList(right);
    std::list<int>  result3 = handleMergeList(result, result2); 
    return result3;
}

void PmergeMe::printSorted(){

    std::cout << "Before:";
    for(std::list<int>::iterator it = _myInput.begin(); it != _myInput.end(); it++){
        std::cout << " " << *it;
    }
    std::cout << "\n" << "After:";

    for(std::deque<int>::iterator it = _myDeque.begin(); it != _myDeque.end(); it++){
        std::cout << " " << *it;
    }
    std::cout << "\n";
    std::cout << "Time to process a range of " << _myInput.size() << " elements with std::deque : " << _timeDeque  << " us\n";
    std::cout << "Time to process a range of " << _myInput.size()  << " elements with std::list : " << _timeList << " us\n";

}
