#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "---- Basic tests from subject ----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << std::endl;

    std::cout << "---- Array of Animals test ----" << std::endl;

    const int size = 10;
    const Animal* animals[size];

    for (int k = 0; k < size; k++)
    {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << std::endl;

    for (int k = 0; k < size; k++)
    {
        delete animals[k];
    }

    std::cout << std::endl;

    std::cout << "---- Deep copy test ----" << std::endl;

    Dog originalDog;
    originalDog.setIdea(0, "I want food");
    originalDog.setIdea(1, "I want sleep");

    Dog copyDog = originalDog;         // copy constructor should be called here

    // Modify original so we can check deep copy
    originalDog.setIdea(0, "I want to run");

    // Display both ideas to verify they are independent
    std::cout << "Original: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copy:     " << copyDog.getIdea(0) << std::endl;

    return 0;
}
