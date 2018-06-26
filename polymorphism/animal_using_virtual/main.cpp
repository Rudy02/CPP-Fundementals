/******************************************************************************
 * Rodolfo Diaz
 * main.cpp: Animal.h, Animal.cpp, Dog.h, Dog.cpp, Cat.h, Cat.cpp
 * 
 * This program was is an extension of our animal_example file. We implemented 
 * the usage of a virtual talk() function. This function is designed
 * to allow us to call the talk() function without bouncing around with
 * objects in our code. It makes for a cleaner look and added readability. 
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
    
    /*
    lucky.talk();
    unlucky.talk();
    */
    //ADDED THIS
    dog1->talk();
    cat1->talk();
}