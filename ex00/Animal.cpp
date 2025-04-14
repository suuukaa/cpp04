#include "Animal.hpp"

Animal::Animal() : type("Animal"){};

Animal::Animal(const Animal &copy){
    *this = copy;
}

Animal::~Animal(){}

Animal &Animal::operator=(const Animal &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

std::string Animal::get_Type(){
    return type;
}
