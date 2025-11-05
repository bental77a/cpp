#include <iostream>



class Zombie
{
    private :
        std::string name;
    public:
        Zombie(std::string _name);
        ~Zombie(void);
        void announce( void );
};