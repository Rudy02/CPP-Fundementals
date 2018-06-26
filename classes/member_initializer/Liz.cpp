#include <iostream>
#include "Liz.h"

using namespace std;

// This might be tricky, but it isn't. We define the constructor like 
// this because the class Liz has a constant variable as an attribute.
// We cannot define it as we normally do, so we write it like so.

Liz::Liz( int a, int b)    // Define the Constructor like normal 
: age(a), favNum(b)        // pass the values to the variables like functions; dont forget the colon at the very beginning
{
}                          // End of the constructor

void Liz::print()
{
    cout << "Age: " << age << " Favorite number: " << favNum << endl;
}