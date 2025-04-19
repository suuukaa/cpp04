#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : name("Chaaracter"){
    this->index = 0;
    for (int i = 0; i < 4; i++){
        inventory[i] = NULL;
    }
}

Character::Character(std::string const & name) : name(name) {
    this->index = 0;
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const Character &copy) : name(copy.name) {
    for (int i = 0; i < 4; i++) {
        if (copy.inventory[i])
            inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if (inventory[i])
            delete inventory[i];
    }
}

Character& Character::operator=(const Character &copy){
    
    if(this != &copy){
        name = copy.name;

        for (int i = 0; i < 4; i++){
            if (inventory[i]){
                delete inventory[i];
                inventory[i] = 0;
            }
        }
        for (int i = 0; i < 4; i++){
            if (copy.inventory[i])
                inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const & Character::getName() const{
    return name;
}

void Character::equip(AMateria* m){
    if (!m)
        return ;
    if(index == 4){
        std::cout << "Inventory is full, materia is not equipped" << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (inventory[i] == m) {
            std::cout << "Materia already equipped" << std::endl;
            return;
        }
    }

    for (int i = 0; i < 4; i++){
        if (inventory[i] == NULL){
            index++;
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= 0 && idx < 4 && inventory[idx]){
        inventory[idx]->use(target);
    }
}
