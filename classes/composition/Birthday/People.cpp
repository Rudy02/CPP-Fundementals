/****************************************************************
 * Rodolfo Diaz
 * People.cpp
 * 
 * This file contains the member definitions for the People class.
 * Since one of the attributes in the People class is of another class,
 * we need to use member initializers. 
 * *************************************************************/ 

#include "People.h"
#include "Birthday.h"
#include <iostream>
#include <string>

using namespace std;

// Use member initializer to pass a class into another class
// in this case, we are passing a class inside the People constructor
People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{
}

void People::printInfo()
{
    cout << name << " was born on ";
    dateOfBirth.printDate();
}