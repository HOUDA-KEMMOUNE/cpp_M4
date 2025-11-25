# include "Cat.hpp"

Cat::Cat( void )
{
    type = "Cat";
    brain = new Brain(type);
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Cat::Cat( const Cat& old ) : Animal(old)
{
    *this = old;
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " coppy constructor called" << std::endl;
}

Cat &Cat::operator=( const Cat& old )
{
    if (this != &old)
    {
        Animal::operator=(old);
        std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " coppy assignement operator called" << std::endl;
    }
    return (*this);
}

void    Cat::makeSound( void ) const
{
    std::cout << "\x1b[1;33m" << "Meow" << "\x1b[0m" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "\033[31m" << "(Cat) " << "\033[0m";
    delete brain;
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " destructor called" << std::endl;
}
