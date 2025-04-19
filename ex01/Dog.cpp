#include "Dog.hpp"

Dog::Dog(){
    DogBrain = new Brain();
    type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy){
    DogBrain = new Brain(*copy.DogBrain);
    type = copy.type;
}

Dog::~Dog(){
    delete DogBrain;
}

Dog &Dog::operator=(const Dog &copy){
    if (this != &copy){
        delete DogBrain;
        DogBrain = new Brain(*copy.DogBrain);
        type = copy.type;
    }
    return *this;
}

void Dog::makeSound() const{
        std::cout << "Hooooooooooooooow!" << std::endl; 
}

Brain *Dog::getBrain() const{
    return DogBrain;
}
