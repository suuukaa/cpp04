#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource{
    
    AMateria* templates[4];
    
    public :
        MateriaSource();
        MateriaSource(const MateriaSource &copy);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &copy);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const &type);
};

#endif