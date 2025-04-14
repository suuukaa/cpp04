#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
    *this = copy;
}

WrongAnimal::~WrongAnimal(){}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

std::string WrongAnimal::getType() const{
    return type;
}

void WrongAnimal::makeSound() const{
        std::cout << "Some animal sound! (Wrong)" << std::endl; 
    }
