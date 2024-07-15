
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::array<int, 10000> input, int size){
    for(int i = 0; i < size; i++){
        _myArray[i] = input[i];
        _myList.push_back(input[i]);
    }
    _size = size;
    _myList = algList(_myList);

    for(std::list<int>::iterator i = _myList.begin(); i != _myList.end(); i++){
        std::cout << " " << *i;
    }
}

PmergeMe::PmergeMe(const PmergeMe &other) {
    (void)other;
}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe &other){
    (void)  other;
    return *this;
}

// std::array<int, 10000> PmergeMe::organizeArray(){
    


// }

// std::array<int, 10000> PmergeMe::algArray(std::array<int, 10000> arr){
    


// }


std::list<int> PmergeMe::handleMerge(std::list<int> list, std::list<int> list2){
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
        {
            return list;
        }
        
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
    std::list<int>  result3 = handleMerge(result, result2); 

    return result3;

}
