
#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include  <cstdint>


struct Data {
    int value;
};

class Serializer {
    private:
        Serializer(); 
        Serializer(const Serializer &other); 

    public:
        ~Serializer(); 
        Serializer &operator=(const Serializer &other);
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif