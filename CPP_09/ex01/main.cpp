
#include "RPN.hpp"

bool parse(char *str)
{
    int j;
    int i = 0;
    std::string validChars = "0123456789+-*/ \t";
    if(!str || !str[0]) 
        return false;
    while(str[i])
    {
        j = 0;
        while(validChars[j])
        {
            if(validChars[j] == str[i])
                break;
            j++;
        }
        if(j == 16)
            return false;
        i++;
    }
    return true;

}

int main(int ac, char **av){

    if(ac != 2){
        std::cerr << "Error: Invalid numbers of arguments" << std::endl;
        return 1;
    }
    if(!parse(av[1])){
        std::cerr << "Error" << std::endl;
        return 1;
    }
    RPN rpn;

    try{
        rpn.run(av[1]);
    }
    catch(std::exception &e){
        std::cerr << e.what() << std::endl;
    };

    return 0;
}