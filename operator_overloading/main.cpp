/********************************************************************
 * Rodolfo Diaz
 * main.cpp: Rach.h, Rach.cpp
 * 
 * This program is meant to help us understand how to overload
 * operators to use them in conjunction with objects that we 
 * create. As an example, we create a Rach class and we overload
 * the "+" and "-" operators to add and subtract integer attributes
 * within the class. 
 * *****************************************************************/

#include <iostream>
#include <string>
#include "Rach.h"

using namespace std;

int main()
{
    //Create 3 objects: passing integers in two and a string in one
    Rach objA(30);
    Rach objB(21);
    Rach objC("Rachel");
    objC.printInfo();
    
    //Create 2 more objects to use the overloaded operators
    Rach c;
    Rach d;
   
    c = objA + objB;
    cout << c.num << endl;
    d = objA - objB;
    cout << d.num << endl;
    
}