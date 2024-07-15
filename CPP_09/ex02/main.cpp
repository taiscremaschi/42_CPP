
#include "PmergeMe.hpp"

bool checkNbr(std::string nbr)
{
    if(nbr.empty() || nbr.find('-') != std::string::npos || nbr.size() > 10)
        return false;
    if(nbr.size() == 10 && nbr > "2147483647")
        return false;
    for(size_t i = 0; i < nbr.size(); i++){
        if(nbr[i] < '0' || nbr[i] > '9')
            return false;
    }
    return true;
}

int main(int ac, char **av)
{
    std::list<int> result;

    for(int i = 1; i < ac; i++){
         if(!checkNbr(av[i])){
            std:: cerr << "invalid number: " << av[i] << std::endl;
            return 1;
         }
         result.push_back(atoi(av[i]));
    }
    for(std::list<int>::iterator it = result.begin(); it != result.end(); it++){

        std::list<int>::iterator it2 = it;
        std::advance(it2, 1);
        while(it2 != result.end()){
            if(*it == *it2){
                std:: cerr << "Error: repeated number: " << *it << std::endl;
                return 1;
            }
            it2++;
        }
    }

    PmergeMe run(result);

    return 0;
}