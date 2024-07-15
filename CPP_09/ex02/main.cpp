
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
    std::array<int,10000> result;

    int j = 0;
    if(ac > 10000){
        std::cerr << "Error: too many parameters: Maximum is 10.000" << std::endl;
        return 1;
    }

    for(int i = 1; i < ac; i++){
         if(!checkNbr(av[i])){
            std:: cerr << "invalid number: " << av[i] << std::endl;
            return 1;
         }
         result[j]= atoi(av[i]);


         j++;
    }
    for(int i = 0; i < ac - 2; i++){
        j = i + 1;
        while(j < ac - 1){
            if(result[i] == result[j]){
                std::cout << result[j] << "   " << result[i]  <<std::endl;
                std:: cerr << "Error: repeated number" << std::endl;
                return 1;
            }
            j++;
        }
    }
    PmergeMe run(result, ac -1);

    return 0;
}