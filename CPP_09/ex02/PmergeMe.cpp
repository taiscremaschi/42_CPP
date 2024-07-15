
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::array<int, 10000> input, int size){
    for(size_t i = 0; i < size; i++){
        _myArray[i] = input[i];
        _myList.push_back(input[i]);
    }
    _size = size;
}

PmergeMe::PmergeMe(const PmergeMe &other) {
    (void)other;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
    (void)  other;
    return *this;
}

std::array<int, 10000> PmergeMe::organizeArray(){
    


}

std::array<int, 10000> PmergeMe::algArray(std::array<int, 10000> arr){
    


}



std::list<int> PmergeMe::algList(std::list<int> list){

    int swap = 0;

    if(list.size() < 3){
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
    algList(right);




}
