#include <iostream>
#include <string>

class Zombie{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    Zombie(std::string name);
    std::string getName();
    void announce();

};

Zombie::Zombie() {}

Zombie::~Zombie() {}

Zombie::Zombie(std::string name)
{
    _name = name;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}



int main()
{
    Zombie tata("tata");

    tata.announce();


}