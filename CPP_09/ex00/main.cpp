#include "BitcoinExchange.hpp"

bool isInt(std::string &tmp)
{
    bool  point = true;
    for(std::size_t i = 0; i < tmp.size(); ++i)
    {
        if(tmp[0] == '-' || tmp[0] == '+')
            continue;
        if(tmp[i] == '.' && point){
            point = false;
            continue;
        }
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
    
    while(buff[i] && buff[i] != ' ')
        i++;
    while(buff[i] == ' ')
        i++;
    if(buff[i] && buff[i] != '|'){
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
    part = buff.substr(start, i - start - 1);
    result.push_back(part);
    start = i + 2;
    while(buff[i] != '\0')
        i++;
    part = buff.substr(start, i - start);
    result.push_back(part);
    return result;
}

std::vector<std::string> split(std::string buff, char c){

    size_t i = 0;
    std::string msg;
    std::vector<std::string> result;
    int start = 0;

    while(i < buff.size())
    {
        while(buff[i] == c)
            i++;
        start = i;
        while(buff[i] != '\0' &&  buff[i] != c)
            i++;
        msg = buff.substr(start, i - start);
        result.push_back(msg);
        i++;
    }
    return result;
}

bool checkDataAndValues(std::vector<std::string> &result)
{
    std::string data = result[0];
    float bit =  atof(result[1].c_str());
    if (bit < 0){
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (bit > 1000){
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    for(size_t i = 0; i < data.size(); i++){
        if(data[i] != '-' && (data[i] < '0' || data[i] > '9'))
        {
    
            std::cout << "Error: invalid format date."  << data[i] << std::endl;
            return false;
        }
    }
    std::vector<std::string> splitDate = split(data, '-');
    if(splitDate.size() != 3)
    {
        std::cout << "Error: invalid format date." << std::endl;
        return false;
    }

    if(atoi(splitDate[1].c_str()) > 12 || atoi(splitDate[1].c_str()) < 1)
    {
        std::cout << "Error: error in parameter mouth." << std::endl;
        return false;
    }
    if(atoi(splitDate[2].c_str()) > 31 || atoi(splitDate[2].c_str()) < 1)
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
    bool first = true;
    while(std::getline(file, buff))
    {
        if(first){
            first = false;
            continue ;
        }
        if(checkLine(buff))
        {
            std::vector<std::string> result = splitInput(buff, '|');
            if(checkDataAndValues(result))
            {
                Data data;
                try {
                    data =  exchange.findData(result[0]);
                    std::cout << result[0] << " => " << result[1] << " = " << data._value * atof(result[1].c_str()) << std::endl;
                }
                catch (const std::exception &err) {
                    std::cerr << "ERROR: " << err.what() << std::endl;
               }
            }
        }
        buff.clear();
    }
}