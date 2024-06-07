
#include "Iter.hpp"


template <typename T>
void iter(T *address, size_t lenght, void(*func)(T&))
{
    for (size_t i = 0; i < lenght; ++i){
        func(address[i]);
    }
}

void printTata(std::string &str)
{
    str += "tata";
}

void addFourtyTwo(int &n)
{
    n += 42;
}


int main()
{
    std::string s[] = {"i love ", "beautiful ", "i like ", "marry me "};
    int i[] = {100, 0, 20, -1, 200, 2000}; 

    ::iter(i, 6, &addFourtyTwo);
    for (int j = 0; j < 6; ++j)
    {
        std::cout << i[j] << std::endl;

    }

    ::iter(s, 4, &printTata);
    
    for(int x = 0; x < 4; ++x)
    {
        std::cout << s[x] << std::endl;
    }





}