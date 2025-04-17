#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++){
        templates[i] = NULL;
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy){
    for (int i = 0; i < 4; i++) {
        if(copy.templates[i])
            templates[i] = copy.templates[i]->clone();
        else
            templates[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &copy){
    if(this != &copy){
        for(int i = 0; i < 4; i++){
            if(templates[i]){
                delete templates[i];
                templates[i] = NULL;
            }
        }

        for (int i = 0; i < 4; i++){
            if(copy.templates[i])
                templates[i] = copy.templates[i]->clone();
            else
                templates[i] = NULL;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource(){
    for(int i = 0; i < 4; i++){
        if(templates[i])
            delete templates[i];
    }
}

void MateriaSource::learnMateria(AMateria* m){
    if(!m)
        return ;
    for (int i = 0; i < 4; i++){
        if(templates[i] == NULL){
            templates[i] = m;
            return ;
        }
    }
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const &type){
    for (int i = 0; i < 4; i++){
        if (templates[i] && templates[i]->getType() == type)
            return templates[i]->clone();
    }
    return NULL;
}