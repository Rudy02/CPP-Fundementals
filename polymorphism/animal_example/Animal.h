#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class Animal
{
    public:
        Animal();
        void setCommunicate(std::string);
        
    protected:
        std::string communicate;
};

#endif