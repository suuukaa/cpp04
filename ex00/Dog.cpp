#include "Dog.hpp"

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(){
    type = copy.type;
}

Dog::~Dog(){}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Dog::makeSound() const{ 
        std::cout << "Hooooooooooooooow!" << std::endl; 
    }
