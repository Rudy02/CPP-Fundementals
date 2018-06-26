/***************************************************************
 * Note to self: Never include "using namespace std;"" in your header.
 * Got it working by adding "std::" everywhere we had string
 * **************************************************************/
#ifndef DOG_H
#define DOG_H
#include <string>

class Dog
{
    public:
        Dog(std::string, int);
        void printInfo();
        
    private:
        std::string name;
        int age;
};

#endif