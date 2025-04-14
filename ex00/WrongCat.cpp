#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy){
    *this = copy;
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
