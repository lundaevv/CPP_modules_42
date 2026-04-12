#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
    // Correct hierarchy: Animal has virtual methods, so calls go to the real derived class.
    std::cout << "=== Correct Animal hierarchy ===" << std::endl;
    const Animal *meta = new Animal();
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();

    std::cout << "meta type: " << meta->getType() << std::endl;
    std::cout << "dog type: " << dog->getType() << std::endl;
    std::cout << "cat type: " << cat->getType() << std::endl;

    meta->makeSound();
    dog->makeSound();
    cat->makeSound();

    delete meta;
    delete dog;
    delete cat;

    std::cout << std::endl;
    // Wrong hierarchy: makeSound() is not virtual in WrongAnimal.
    // Because of that, calling makeSound() through a WrongAnimal* uses WrongAnimal::makeSound(),
    // even if the real object is WrongCat.
    std::cout << "=== Wrong Animal hierarchy ===" << std::endl;
    const WrongAnimal *wrongMeta = new WrongAnimal();
    WrongCat *realWrongCat = new WrongCat();
    const WrongAnimal *wrongCatView = realWrongCat;

    std::cout << "wrongMeta type: " << wrongMeta->getType() << std::endl;
    std::cout << "wrongCat type: " << wrongCatView->getType() << std::endl;

    wrongMeta->makeSound();
    wrongCatView->makeSound();

    delete wrongMeta;
    // We delete through WrongCat* to avoid undefined behavior,
    // because WrongAnimal does not have a virtual destructor.
    delete realWrongCat;

    return 0;
}
