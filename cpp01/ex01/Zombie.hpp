#include <iostream>



class Zombie
{
    private :
        std::string name;
    public:
        Zombie();
        ~Zombie(void);
        void announce( void );
        void setName(std::string _name);
};