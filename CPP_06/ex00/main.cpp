#include "ScalarConverter.hpp"

int main()
{
    ScalarConverter::convert("c");
    std::cout << "\n";
    ScalarConverter::convert("19");
    std::cout << "\n";

    ScalarConverter::convert("as");
    std::cout << "\n";

    ScalarConverter::convert("10f");

    std::cout << "\n";
    ScalarConverter::convert("100.0");
    std::cout << "\n";

    ScalarConverter::convert("1000.567f");



}