#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
}

Cat::Cat(const Cat &copy){
    *this = copy;
}

Cat::~Cat(){}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Cat::makeSound(){ 
        std::cout << "Meow!" << std::endl; 
}
