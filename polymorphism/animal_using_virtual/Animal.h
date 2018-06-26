#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>


class Animal
{
    public:
        Animal();
        void setCommunicate(std::string);
        virtual void talk(){}    //ADDED THIS
    protected:
        std::string communicate;
};

#endif