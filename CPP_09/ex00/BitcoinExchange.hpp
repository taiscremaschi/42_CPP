#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <vector>
#include <fstream>


struct Data {
        std::string _data;
        int _value;
};

class BitcoinExchange {
    private:
        std::vector<Data> _dataBase;
        

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other); 
        ~BitcoinExchange();
        Data findData(std::string date);




};

std::vector<std::string> splitInput(std::string buff, char c);

#endif