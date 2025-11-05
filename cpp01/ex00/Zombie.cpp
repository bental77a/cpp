#include "Zombie.hpp"


Zombie::Zombie(std::string _name){name = _name;}
Zombie::~Zombie(void){std::cout << "Zombie is died" << std::endl;}
void Zombie::announce( void ){std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;}