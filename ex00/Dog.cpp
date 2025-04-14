#include "Dog.hpp"

#include "Dog.hpp"

Dog::Dog(){
    type = "Dog";
}

Dog::Dog(const Dog &copy){
    *this = copy;
}

Dog::~Dog(){}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Dog::makeSound(){ 
        std::cout << "Hooooooooooooooow!" << std::endl; 
    }
