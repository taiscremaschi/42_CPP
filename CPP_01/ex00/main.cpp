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
//////////////////////////////////// funcoes da classe ////////////////////////////////////////////////
Zombie::Zombie() {}

Zombie::~Zombie() {
    std::cout << _name << " destroyed" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

std::string Zombie::getName()
{
    return _name;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////

Zombie *newZombie( std::string name)
{
    Zombie *zombie = new Zombie(name);

   return zombie;

}

void randomChump( std::string name )
{
    Zombie zombie(name);
    zombie.announce();
}

int main()
{
    Zombie *zombie = newZombie("tata");
    zombie->announce();
    delete zombie;
    randomChump("ricardinho");
    randomChump("dioguinho");

}