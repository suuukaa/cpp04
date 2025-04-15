#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
}

Cat::Cat(const Cat &copy){
    type = copy.type;
}

Cat::~Cat(){}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

void Cat::makeSound() const{ 
        std::cout << "Meow!" << std::endl; 
}
