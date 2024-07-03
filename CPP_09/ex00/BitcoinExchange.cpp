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

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) {
    (void)other;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other){
    (void)  other;
    return *this;
}


Data BitcoinExchange::findData(std::string date){
    for(size_t i = 0; i < _dataBase.size() ; i++){
        if(_dataBase[i]._data == date)
            return _dataBase[i];
    }

    for(size_t i = 0; i < _dataBase.size() ; i++){
        if(_dataBase[i]._data > date && i > 0)
            return _dataBase[i - 1];
    }
    throw std::invalid_argument("data not found");
}

