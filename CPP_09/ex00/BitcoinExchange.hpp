#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <iostream>
#include <vector>
#include <fstream>


class Data {
    private:
        std::string _data;
        int _value;
    public:
        Data(std::string data, int value);
        Data(const Data &other);
        Data &operator=(const Data &other); 
        ~Data();
};

class BitcoinExchange {
    private:
        std::vector<Data> _dataBase;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other); 
        ~BitcoinExchange();



};



#endif