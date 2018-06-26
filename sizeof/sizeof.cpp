/****************************************************************************
 * Rodolfo Diaz
 * sizeof.cpp
 * 
 * In this file, we are just practicing the usage of the sizeof() function.
 * This function grabs the size of whatever is being passed through its 
 * parameter. Below is an example of a char value and an array of 10 doubles.
 * **************************************************************************/


#include <iostream>

using namespace std;

int main()
{
    // We get the size of a char
    char c;
    cout << sizeof(c) << endl;
    
    // we get the sizeof a single double
    double array[10];
    cout << sizeof(array) << endl;
    
    // If we ever encounter an array without knowing the size. 
    // we can use the sizeof() function to see how many bytes
    // it holds. Helps with bigger programs. 
    cout << sizeof(array) / sizeof(array[0]) << endl;
    
}