/********************************************************************************
 * Rodolfo Diaz
 * pointer2.cpp
 * 
 * In this file, we see how math can differ with pointers. If we add an interger
 * of 1 to a pointer, it doesn't change the memory location of the pointer, but
 * rather it changes what address the pointer point to by 1(in this case, 4 bytes
 * since we are dealing with integers).
*********************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int array[5];
    
    int *p0 = &array[0];
    int *p1 = &array[1];
    int *p2 = &array[2];

    cout << "Memory of array[0]: " << p0 << endl;
    cout << "Memory of array[1]: " << p1 << endl;
    cout << "Memory of array[2]: " << p2 << endl;
    
    // Changing where p0 is going to point to the next address
    p0++;
    cout << "Memory of array[0]: " << p0 << endl;


    
    
}