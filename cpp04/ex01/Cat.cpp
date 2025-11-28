#include "Cat.hpp"

Cat::Cat() : Animal() , brain(new Brain())
{
    this->type = "Cat";
    std::cout << "default contructor : " << type << "created" << std::endl;
}

Cat::~Cat()
{
    delete brain;
    std::cout << "destructor : " << type << "destroyed" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor" << std::endl;
    this->type = other.type;
    this->brain = new Brain(*other.brain);
}
Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat assignment operator" << std::endl;
    if (this != &other) 
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain);
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "cat :  is meowing!!" << std::endl;
}