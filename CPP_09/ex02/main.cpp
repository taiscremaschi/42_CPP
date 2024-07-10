
#include "PmergeMe.hpp"


bool checkNbr(std::string nbr)
{
    if(nbr.empty())
        return false;
    if(nbr.find('-'))
        return false;
    if(nbr.size() > 10)
        return false;
    if(nbr > "2147483647")
        return false;

    for(int i = 0; i < nbr.size(); i++)
    {
        if(nbr[i] >= '0' && nbr[i] <= '9')
            i++;
        else
            return false;
    }
    if(atoi(nbr.c_str()))
        return true;
}


std::array<int, 5000> split(std::string input){

    size_t i = 0;
    size_t j = 0;
    std::string nbr;
    std::array<int, 5000>  result;
    int start = 0;

    while(i < input.size())
    {
        while(input[i] == ' ')
            i++;
        start = i;
        while(input[i] != '\0' &&  input[i] != ' ')
            i++;
        nbr = input.substr(start, i - start);
        if(!checkNbr(nbr))
            throw std::invalid_argument("Invalid number");
        result[j]= atoi(nbr.c_str());
        i++;
        j++;
    }
    return result;
}


int main(int ac, char **av)
{
    //split de espaço,  verificar se algum desses é maior que o int max ou negatvo 


}