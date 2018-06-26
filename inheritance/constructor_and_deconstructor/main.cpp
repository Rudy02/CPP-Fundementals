/***********************************************************
 * Rodolfo Diaz
 * main.cpp: Mother.h, Mother.cpp, Daughter.h, Daughter.cpp
 * 
 * This program displays how constructors and deconstructors
 * work when a derive class inherits from a base class.
 * The derive class doesn't inherit the constructor and
 * deconstructor of the base class, yet those constructors
 * are invoked when a objected is created from a derived
 * class. 
 * The Mother constructor is invoked first because in order
 * for the Daughter constructor to work, it is dependant on 
 * the Base Class constructor.
 * *********************************************************/

#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    Mother mom;
    
    Daughter tina;
}