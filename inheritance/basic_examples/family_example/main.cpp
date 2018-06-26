/****************************************************************
 * Rodolfo Diaz
 * main.cpp: Mother.h, Mother.cpp, Daughter.h, Daughter.cpp
 * 
 * This program was designed to practice the concept of inheritance.
 * We created a Mother Base Class and a Daughter Derived Class to use.
 * We did this because we want to pass all the public member functions
 * of the Mother class into the Daughter class. 
 * 
 * Side note: There was an error within the Daughter.h file.
 * Remember that you must include the "Mother.h" file because
 * you are deriving the member functions from that base class.
 * ****************************************************************/

#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    Mother mom;
    mom.sayName();
    
    Daughter tina;
    tina.sayName();
}