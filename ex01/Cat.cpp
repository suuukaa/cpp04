#include "Cat.hpp"

Cat::Cat(){
    CatBrain = new Brain();
    type = "Cat";
}

Cat::Cat(const Cat &copy){
    CatBrain = new Brain(*copy.CatBrain);
    type = copy.type;
}

Cat::~Cat(){
    delete CatBrain;
}

Cat &Cat::operator=(const Cat &copy){
    if (this != &copy){
        delete CatBrain;
        CatBrain = new Brain(*copy.CatBrain);
        type = copy.type;
    }
    return *this;
}

void Cat::makeSound(){ 
        std::cout << "Meow!" << std::endl; 
}

Brain *Cat::getBrain() const{
    return CatBrain;
}
