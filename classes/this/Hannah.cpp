#include <iostream>
#include "Hannah.h"

using namespace std;

Hannah::Hannah(int num)
: h(num)
{
    
}

void Hannah::printStuff()
{
    //Method #1
    //Private Variable: Implided
    cout << "h = " << h << endl;
    
    //Method #2
    //Explicit: access the member variable of the current object
    //being pointed to
    cout << "this -> " << this->h << endl;
    
    //Method #3
    //Explicit: Dereference the current object pointer
    //Access the member variable "h" using the . operator
    cout << "(*this).h =" << (*this).h << endl;
}