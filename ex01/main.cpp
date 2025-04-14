#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main() {
    // Create Dog and Cat objects
    Dog dog1;
    Cat cat1;

    // Set ideas
    dog1.getBrain()->setIdea(0, "Chase the ball!");
    dog1.getBrain()->setIdea(1, "Play fetch with the human!");

    cat1.getBrain()->setIdea(0, "Climb the tree!");
    cat1.getBrain()->setIdea(1, "Catch a mouse!");


    std::cout << "dog1's Brain idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog1's Brain idea 1: " << dog1.getBrain()->getIdea(1) << std::endl;

    std::cout << "cat1's Brain idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat1's Brain idea 1: " << cat1.getBrain()->getIdea(1) << std::endl;

    // Test deep copy by copying dog1 to dog2
    Dog dog2 = dog1;
    std::cout << "\nTesting deep copy for Dog:" << std::endl;
    std::cout << "dog2's Brain idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2's Brain idea 1: " << dog2.getBrain()->getIdea(1) << std::endl;

    // Modify dog2's Brain and check if it affects dog1
    dog2.getBrain()->setIdea(0, "New idea for dog2");
    std::cout << "After modification, dog1's Brain idea 0: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "After modification, dog2's Brain idea 0: " << dog2.getBrain()->getIdea(0) << std::endl;

        // Test deep copy by copying cat1 to cat2
        Cat cat2 = cat1;
        std::cout << "\nTesting deep copy for Cat:" << std::endl;
        std::cout << "cat2's Brain idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;
        std::cout << "cat2's Brain idea 1: " << cat2.getBrain()->getIdea(1) << std::endl;
    
        // Modify cat2's Brain and check if it affects cat1
        cat2.getBrain()->setIdea(0, "New idea for cat2");
        std::cout << "After modification, cat1's Brain idea 0: " << cat1.getBrain()->getIdea(0) << std::endl;
        std::cout << "After modification, cat2's Brain idea 0: " << cat2.getBrain()->getIdea(0) << std::endl;
    
    return 0;
}
