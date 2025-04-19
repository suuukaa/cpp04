#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

std::cout << "\n\n";

const WrongAnimal* Meta = new WrongAnimal();
const WrongAnimal* I = new WrongCat();
std::cout << I->getType() << " " << std::endl;
I->makeSound(); //will output the cat sound!
Meta->makeSound();

delete j;
delete i;
delete meta;
delete I;
delete Meta;

return 0;
}
