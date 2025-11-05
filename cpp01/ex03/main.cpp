#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"


std::string Weapon::getType() 
{
    std::string const &strRef =  type;
    return(strRef);
} //getter
void Weapon::setType( std::string weapon_name){type = weapon_name;} //setter

int main()
{
    {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
    }
    return (0);
}