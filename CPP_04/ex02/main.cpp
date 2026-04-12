#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal is an abstract class, so this would not compile:
    // Animal animal;

    const Animal* animals[4];

    for (int i = 0; i < 2; i++)
        animals[i] = new Dog();
    for (int i = 2; i < 4; i++)
        animals[i] = new Cat();

    std::cout << "=== Polymorphism test ===" << std::endl;
    for (int i = 0; i < 4; i++)
        animals[i]->makeSound();

    std::cout << std::endl;
    std::cout << "=== Delete through Animal* ===" << std::endl;
    for (int i = 0; i < 4; i++)
        delete animals[i];

    std::cout << std::endl;
    std::cout << "=== Deep copy test ===" << std::endl;

    // Shallow copy means copying only the pointer value.
    // Then two objects point to the same Brain in memory.
    // If one object deletes it, the other object gets a broken pointer.
    //
    // Deep copy means creating a completely new Brain object
    // and copying the contents into it.
    // So each Animal has its own separate Brain.

    Dog originalDog;
    Dog copiedDog(originalDog); // deep copy

    Cat originalCat;
    Cat copiedCat;
    copiedCat = originalCat; // deep copy

    std::cout << "originalDog brain: " << originalDog.getBrain() << std::endl;
    std::cout << "copiedDog brain: " << copiedDog.getBrain() << std::endl;

    std::cout << "originalCat brain: " << originalCat.getBrain() << std::endl;
    std::cout << "copiedCat brain: " << copiedCat.getBrain() << std::endl;

    // If the addresses are different, then Brain was deep-copied.
    // If the addresses are the same, then it would be a shallow copy.

    return 0;
}
