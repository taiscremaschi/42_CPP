#include "BitcoinExchange.hpp"

bool isInt(std::string &tmp)
{
    for(std::size_t i = 0; i < tmp.size(); ++i)
    {
        if(tmp[0] == '-' || tmp[0] == '+' || tmp[i] == '.')
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
        std::cout << "Error: bad input => " << buff << std::endl;
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
            std::cout << "Error: bad input => " << buff << std::endl;
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
    // for(size_t j = 0; j < result.size(); j++){
    //     std::cout <<  "esse puto aqui " << result[j]  << "    " << j << std::endl;
    // }
    return result;
}

bool checkDataAndValues(std::vector<std::string> &result)
{
    std::string data = result[0];
    float bit =  atof(result[1].c_str());
    if (bit < 0){
        std::cout << "Error: not a positive number" << std::endl;
        return false;
    }
    if (bit > 1000){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    for(size_t i = 0; i < data.size(); i++){
        if(data[i] != '-' && (data[i] < '0' || data[i] > '9'))
        {
    
            std::cout << " sera que Error: invalid format date."  << data[i] << std::endl;
            return false;
        }
    }
    std::vector<std::string> split = splitInput(data, '-');
    for (size_t i = 0; i < split.size(); i ++){
        std::cout << " esse eh meu print " << split[i] << "   " << i << std::endl;
    }
    if(split.size() != 3)
    {
        std::cout << "que cu " <<  split.size() << " " << std::endl;
        return false;
    }

    if(atoi(split[1].c_str()) > 12 || atoi(split[1].c_str()) < 1)
    {
        std::cout << "Error: error in parameter mouth." << std::endl;
        return false;
    }
    if(atoi(split[2].c_str()) > 31 || atoi(split[2].c_str()) < 1)
    {
        std::cout << "Error: error in parameter days." << std::endl;
        return false;
    }
    return true;
}

int main(int ac, char **av)
{
    if(ac != 2){
        std::cerr << "Error: could not open file." << std::endl;
        return 1;
    }
    std::string filename = av[1];
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
            if(result[0][result[0].size()-1] == ' ' || '\t')
                result[0].erase(result[0].end() - 1);
            if(result[1][0] == ' ' || '\t')
                result[1].erase(result[1].begin());
            if(checkDataAndValues(result))
            {
                Data data; //arrumar o primeiro argumento 
                try {
                    data =  exchange.findData(result[0]);
                    std::cout << result[0] << " => " << result[1] << " = " << data._value * atof(result[1].c_str()) << std::endl;
                }
                catch (const std::exception &err) {
                    std::cerr << "ERROR: " << err.what() << std::endl;
               }
            }
        }
        std::cerr << "aqui: " << std::endl;

        buff.clear();
    }
}