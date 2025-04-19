#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy){
    type = copy.type;
}

WrongCat::~WrongCat(){}

WrongCat &WrongCat::operator=(const WrongCat &copy){
    if (this != &copy)
        type = copy.type;
    return *this;
}

void WrongCat::makeSound(){ 
        std::cout << "Meow!" << std::endl; 
}
