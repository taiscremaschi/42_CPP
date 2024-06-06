
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

struct Data {
    int value;
};

class Serializer {
    private:
        Serializer(); 

    public:
        Serializer(const Serializer &other); 
        ~Serializer(); 
        Serializer &operator=(const Serializer &other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif