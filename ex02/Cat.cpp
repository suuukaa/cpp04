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
makeSound
void Cat::makeSound() const{ 
        std::cout << "Meow!" << std::endl; 
}

Brain *Cat::getBrain() const{
    return CatBrain;
}
