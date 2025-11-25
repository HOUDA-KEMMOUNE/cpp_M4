#include "Dog.hpp"

Dog::Dog( void )
{
    type = "Dog";
    brain = new Brain(type);
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Dog::Dog( const Dog& old ) : Animal(old)
{
    *this = old;
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy constructor called" << std::cout;
}

Dog &Dog::operator=( const Dog& old )
{
    if (this != &old)
    {
        Animal::operator=(old);
        std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy assignement operator called" << std::cout;
    }
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "\x1b[96m" << "ruff" << "\x1b[0m" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "\033[31m" << "(Dog) " << "\033[0m";
    delete brain;
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " destructor called" << std::endl;
}
