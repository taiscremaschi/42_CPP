#include "ScalarConverter.hpp"

int main(int ac, char **argv)
{
    if(ac != 2){
         std::cerr << "Invalid arguments\n";
        return 1;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}