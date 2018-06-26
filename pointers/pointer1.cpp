/***************************************************************************
 * Rodolfo Diaz
 * pointer1.cpp
 * 
 * In this file, we are simply running through the basic concept of pointers.
 * We use the & (address-of) operator and the different uses of * (pointer 
 * declarations and de-referencing) to better understand the concept.
 * 
 * Note: Do not confuse the & for passing by reference. That is strictly used
 * for parameters within functions. Reference, pointers, and address are all
 * closely related but used differently in various context.
 * *************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    // Address-of Operator //
    // We use the address-of operator to print out the memeory address
    // associated with the variable "value"
    int value = 10;
    cout << "Memory Address of value is: " << &value << endl;
    
    // * Pointer Declaration //
    // Creating a pointer and assign a the address-of value to it
    int *p = &value;
    cout << "The memory address being pointed to is:" << p << endl;
    
    // * De-referencing //
    // This is tricky, we are now de-referencing the pointer p to get
    // the value for the address it's pointing to
    cout << "De-referencing the value that is being pointed to is: " << *p << endl;
    
}