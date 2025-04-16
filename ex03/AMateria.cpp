#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type) :  type(type){}

AMateria &AMateria::operator=(const AMateria &copy){
    
    if (this != &copy){
        type = copy.type;
    }
    return *this;
}

AMateria::~AMateria(){}

std::string const &AMateria::getType() const{
    return type;
}

void AMateria::use(ICharacter& target){
    std::cout << "use" << target.getName() << std::endl;
}