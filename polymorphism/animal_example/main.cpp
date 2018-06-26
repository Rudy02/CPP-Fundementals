/******************************************************************************
 * Rodolfo Diaz
 * main.cpp: Animal.h, Animal.cpp, Dog.h, Dog.cpp, Cat.h, Cat.cpp
 * 
 * This program was designed to further our understanding of polymorphism.
 * We have a base class Animal that has two derived classes: Dog and Cat.
 * These two derived classes have a talk() function that outputs how they 
 * communicate. These two classes have a similar function that do the same
 * thing, but with small differences. 
 * 
 * This concept sits at the core of polymorphism. Different objects can 
 * have similar function names that do the same thing. The execution of 
 * these functions may change, but at the end they accomplish the same thing.
 * In this case, both Dog and Cat are able to talk().
 * 
 * ***************************************************************************/

#include <iostream>
#include <string>
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

int main()
{
    Dog lucky;
    Cat unlucky;
    
    Animal *dog1 = &lucky;
    Animal *cat1 = &unlucky;
    
    dog1->setCommunicate("Bark");
    cat1->setCommunicate("Meow");
    
    lucky.talk();
    unlucky.talk();
}