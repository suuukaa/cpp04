#ifndef CAT_HPP
#define CAT_HPP

#include  "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

    Brain* CatBrain;

    public :
        Cat();
        Cat(const Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        
        void makeSound();
        Brain* getBrain() const;
};

#endif