#include "BitcoinExchange.hpp"

bool isInt(std::string &tmp)
{
    for(std::size_t i = 0; i < tmp.size(); ++i)
    {
        if(tmp[0] == '-' || tmp[i] == '+')
            continue;
        if(!isdigit(tmp[i]))
        {
            std::cerr << "Error: number invalid => " << tmp << std::endl;
            return false;
        }
    }
    return true;
}

bool checkLine(std::string buff)
{
    std::string tmp;
    int i = 0;
    
    while(buff[i] != ' ')
        i++;
    while(buff[i] == ' ')
        i++;
    if(buff[i] != '|'){
        std::cout << " check line pipe Error: bad input => " << buff << std::endl;
        return false;
    }
    if(buff[i] && buff[i + 1])
        i++;
    while(buff[i] == ' ')
        i++;
    while (buff[i] && buff[i] != ' ')
    {
        tmp += buff[i];
        i++;  
    }
    if(!isInt(tmp))
        return false;
    while(buff[i]){
        if(buff[i] && buff[i] != ' '){
            std::cout << "check espaço Error: bad input => " << buff << std::endl;
            return false;
        }
        i++;
    }
    return true;
}

std::vector<std::string> splitInput(std::string buff, char c)
{
    size_t i = 0;
    std::string part;
    std::vector<std::string> result;
    int start = 0;

    while(buff[i] != c)
        i++;
    part = buff.substr(start, i - start);
    result.push_back(part);
    start = i + 1;
    while(buff[i] != '\0')
        i++;
    part = buff.substr(start, i - start);
    result.push_back(part);

    return result;
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
    BitcoinExchange exchange;
    while(std::getline(file, buff))
    {
        if(checkLine(buff))
        {
            std::vector<std::string> result = splitInput(buff, '|');
          //  checkDataAndValues(); //numero maior que mil, negativo, 
           Data data;
           data =  exchange.findData(result[0]);
           std::cout << result[0] << " => " << result[1] << " = " << data._value * atoi(result[1].c_str()) << std::endl;

        }
        //procurar vec 0 na data base. se tiver, vou pegar o numero


        buff.clear();
    
    }
    
    



}