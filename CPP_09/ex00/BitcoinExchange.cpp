#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
    std::string buff;
    std::ifstream filename("data.csv");
    while(std::getline(filename, buff))
    {
        if(buff[0] < '0' && buff[0] > '9')
            continue ;
        Data data;
        std::vector<std::string> result = splitInput(buff, ',');
        data._data = result[0];
        data._value = atoi(result[1].c_str());
        _dataBase.push_back(data);
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    return *this;
}

