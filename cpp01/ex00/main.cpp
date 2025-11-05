#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* heapZombie = newZombie("dash");  // heap
    heapZombie->announce();
    delete heapZombie;
    randomChump("dash");                     // stack
    return 0;
}
