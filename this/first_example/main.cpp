/********************************************************************************
 * Rodolfo Diaz
 * main.cpp: Hannah.h, Hannah.cpp
 * 
 * This program is design to understand the "this" pointer. This is a pointer
 * to the address of whichever pointer you're currently working on.
 * We are testing how we can print out a variable using three methods.
 * 
 * Method #1: Implied; The first method simply prints out the variable
 * like we regularly do. The compiler automatically assumes we are working
 * with the current object.
 * 
 * Method #2: Explicit; this=>h
 * This method is used explicitly to print out the variable h. 
 * We want to explicitly tell the compiler that it is working with the 
 * current object. 
 * Since this is a pointer to the address of the current object, we use
 * -> because we want to derefence and access the member variable "h"
 * for the "this" pointer. 
 * 
 * Remember: -> is a combination of dereferencing and member access; 
 * Like the . operator, it is used for regular variables to access a 
 * member function or member variables.
 * -> is the same as a . operator, but is works exclusively for pointers.
 * 
 * Method #3: Explicity using (*this).h
 * Like we stated above, -> is a derefencer and member function/variable
 * accessor. It works the same way, but written differently. We derefence
 * the current object and access the member variable "h" using the . operator.
 * 
 ******************************************************************************/

#include <iostream>
#include "Hannah.h"

using namespace std;

int main()
{
    Hannah ho(23);
    ho.printStuff();
}