#ifndef CAT_H
#define CAT_H
#include <iostream>
#include "Animal.h"

class Cat: public Animal
{
    public:
        Cat();
        void talk(){std::cout << communicate << std::endl;}
};

#endif