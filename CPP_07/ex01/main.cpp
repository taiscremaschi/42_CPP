
#include "Iter.hpp"



void printTata(std::string &str)
{
    str += "tata";
}

void addFourtyTwo(int &n)
{
    n += 42;
}

template <typename T1>
void printResult(T1 &type)
{
        std::cout << type << std::endl;
}

int main()
{
    std::string s[] = {"i love ", "beautiful ", "i like ", "marry me "};
    int i[] = {100, 0, 20, -1, 200, 2000}; 

    ::iter(i, 6, &addFourtyTwo);

    ::iter(s, 4, &printTata);

    ::iter(i, 6, &printResult);





}