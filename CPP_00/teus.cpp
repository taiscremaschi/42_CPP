#include <iostream>


class Animal{
private:
    std::string _nome;
    int _idade;

public:
    Animal() {
        _nome = "tataa";
        _idade = 8;
        
    }

    Animal(std::string nome, int idade) {
        _nome = nome;
        _idade = idade;
    }

    ~Animal() {};

};


int main()
{
    Animal coco;
}