/*************************************************************
 * Rodolfo Diaz
 * main.cpp: Kelly.h, Kelly.cpp
 * 
 * In this file we go over the usage of constant objects.
 * Constant objects are different and as such we cannot pass 
 * a constant object through a regular member function. We 
 * must create a constant member function in order for our 
 * constant object to have member functions to use.
 * ***********************************************************/

#include <iostream>
#include "Kelly.h"

using namespace std;

int main()
{
    // Calling a member function of a regular object
    Kelly obj;
    obj.printStuff();
    
    // Calling a constant member function for a constant object
    const Kelly constObj;
    constObj.printStuff2();
}