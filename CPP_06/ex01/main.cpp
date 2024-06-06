
#include "Serializer.hpp"
#include <string>
#include <iostream>


int main()
{
    Data myData = {42};


    uintptr_t raw = Serializer::serialize(&myData);
    Data* deserializedDataPtr = Serializer::deserialize(raw);
    std::cout << "Deserialized Data value: " << deserializedDataPtr->value << std::endl;

}