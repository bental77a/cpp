#include "Dog.hpp"


Dog::Dog() : Animal(), brain(new Brain())
{
    this->type = "Dog";
    std::cout << "default contructor : " << type << "has created" << std::endl;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "destructor : " << type << "has destroyed" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor" << std::endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}
Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignment operator" << std::endl;
    if (this != &other) 
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}
void Dog::makeSound() const
{
    std::cout << "dog is barking!!" << std::endl;
}