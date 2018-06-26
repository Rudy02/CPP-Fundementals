/******************************************************************************
 * Rodolfo Diaz
 * main.cpp: Birthday.h, Birthday.cpp, People.h, People.cpp
 * 
 * This program prints out the name and birthday of a person. It utilizes 
 * a Birthday superclass and a Person sub-class. We are learning how to
 * make a class an attribute for another class. We implement the member
 * initializer for the People constructor in order to pass and use the 
 * Birthday obj member function within the People class.
 * ***************************************************************************/
 
#include <iostream>
#include <string>
#include "Birthday.h"
#include "People.h"

using namespace std;

int main()
{
    Birthday birthObj(3,28,1990);
    
    People Rudy("Rudy", birthObj);
    
    Rudy.printInfo();
}