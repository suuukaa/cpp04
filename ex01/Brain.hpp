#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &copy);
    Brain &operator=(const Brain &copy);
    ~Brain();

    std::string getIdea(int index) const;
    void setIdea(int index, const std::string &idea);
};

#endif
    