#include "Brain.hpp"
#include <iostream>

Brain::Brain() {}

Brain::Brain(const Brain &copy) {
    for (int i = 0; i < 100; ++i) {
        this->ideas[i] = copy.ideas[i];
    }
}

Brain::~Brain() {}

Brain &Brain::operator=(const Brain &copy) {
    if (this != &copy) {
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return *this;
}

std::string Brain::getIdea(int index) const {
    if (index >= 0 && index < 100)
        return ideas[index];
    return "";
}

void Brain::setIdea(int index, const std::string &idea) {
    if (index >= 0 && index < 100)
        ideas[index] = idea;
}
