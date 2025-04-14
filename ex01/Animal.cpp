#include "Animal.hpp"

Animal::Animal() : type("Animal"){};

Animal::Animal(const Animal &copy){
    type = copy.type;
}

Animal::~Animal(){}

Animal &Animal::operator=(const Animal &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

std::string Animal::getType() const{
    return type;
}

void Animal::makeSound() const{
        std::cout << "Some animal sound!" << std::endl; 
}
