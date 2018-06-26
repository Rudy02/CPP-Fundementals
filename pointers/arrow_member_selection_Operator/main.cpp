/******************************************************************************
 * Rodolfo Diaz
 * main.cpp: sally.h and sally.cpp
 * 
 * In this file, we are learning the usage of the -> operator. When it comes to
 * classes, there are two ways we can access member functions. One way is 
 * through the (.) seperator and the other is the -> operator. The -> operator
 * works well with pointers. We can point to the address of an object and 
 * dereference the element within the object. In this case, we derefence a 
 * memeber function. 
 ******************************************************************************/

#include <iostream>
#include "sally.h"

using namespace std;

int main()
{
    // Create an object and access a member function
    sally sallyObject;
    sallyObject.printStuff();
    
    
    // Create a pointer to the address of the object and access the
    // the member function
    
    sally *sallyPointer = &sallyObject;
    sallyPointer->printStuff(); 
    // To help understand, imagine writing it like this: 
    //(*sallyPointer).printStuff(); 
}