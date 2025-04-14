#ifndef DOG_HPP
#define DOG_HPP

#include  "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

    Brain* DogBrain;

    public :
        Dog();
        Dog(const Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &copy);

        void makeSound();
        Brain* getBrain() const;
    };

#endif
