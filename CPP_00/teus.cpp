#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define YELLOW  "\033[33m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      
#define WHITE   "\033[37m"  

// class Animal{
// private:
//     std::string _nome;
//     int _idade;

// public:
//     Animal() {
//         _nome = "tataa";
//         _idade = 8;
        
//     }

//     Animal(std::string nome, int idade) {
//         _nome = nome;
//         _idade = idade;
//     }

//     ~Animal() {};

// };

int main() {
    // std::cout << RED << "Texto vermelho" << RESET << std::endl;
    // std::cout << GREEN << "Texto verde" << RESET << std::endl;
    // std::cout << YELLOW << "Texto amarelo" << RESET << std::endl;
    // std::cout << BLUE << "Texto azul" << RESET << std::endl;
    // std::cout << MAGENTA << "Texto magenta" << RESET << std::endl;
    // std::cout << CYAN << "Texto ciano" << RESET << std::endl;
    // std::cout << WHITE << "Texto branco\n" << RESET << std::endl;


    std::cout << CYAN << "WELCOME TO THIS FANTASTIC TRIP!\n" << RESET;
        std::cout << BLUE << "Enter command ADD or SEARCH OR EXIT: " << RESET;

    return 0;
}