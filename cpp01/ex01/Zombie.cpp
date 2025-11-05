#include "Zombie.hpp"


Zombie::~Zombie(void){std::cout << "Zombie is died" << std::endl;}
void Zombie::announce( void ){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}
Zombie::Zombie(){}
void Zombie::setName(std::string _name) { name = _name; }