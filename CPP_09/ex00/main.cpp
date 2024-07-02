#include "BitcoinExchange.hpp"
#include <vector>

bool checkLine(std::string buff)
{



    return true;
}

std::vector<std::string> splitInput(std::string buff)
{


}


int main(int ac, char **av)
{
    if(ac != 2){
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    std::string filename = av[1];

    //abrir o arq,
    // ler e guardar a key (data ) e o value (preço)
    std::ifstream file(filename.c_str());
    if(!file)
    {
        std::cerr << "error in file" << std::endl;
        return 1;
    }
    std::string buff;
    while(std::getline(file, buff))
    {
        if(checkLine(buff))
        {
            std::vector<std::string> result = splitInput(buff);
        }
        //procurar vec 0 na data base. se tiver, vou pegar o numero


        buff.clear();
    
    }
    
    



}