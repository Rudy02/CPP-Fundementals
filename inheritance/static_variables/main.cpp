/**********************************************************************************
 * File: main.cpp
 * Associated Files: Mother.h, Mother.cpp, Son.h, Son.cpp
 * Author: Rodolfo Diaz
 * Directory: ../garbage_collection/static_variables
 * 
 * This program prints out how many mothers there are. It does this by the usage
 * of a static attribute within the Base Class Mother. Static attributes that are
 * encapsulated are shared between all objects of a given class.
 * 
 * In this example, each time we create a Mother Object, we increment our static 
 * variable numOfMothers to keep track of how many Mothers are created. Once a 
 * Mother object is destroyed, we decrement numOfMOthers to reflect the count.
 * 
 * *********************************************************************************
 * Update: Introduction to new keyword
 * Within our program, we have three mother objects. However, the third object 
 * is a pointer to a new Mother Object. 
 * 
 * We did this to intoduce ourselves to creating an object on a stack and a heap.
 * Normally, when we deal with the object directly using the dot member accessor
 * operator, our object is created in the stack. 
 * However, if we dynamically allocate memory for our object, we would do this by
 * creating it on the heap. 
 * 
 * Why?: Our objects are deleleted in one way or another. With objects in the stack,
 * they are deleted automatically once it is out of the scope. However, say we needed
 * the object once it leaves the scope. This is where we can use pointers and the 
 * 'new' keyword to create dynamic allocated memory for our new object. 
 * 
 * Differences: 
 * Syntax:
 *     Mother* mom3;
 *     mom3 = new Mother("Christina");
 *     cout << mom3->getNumOfMothers() << endl;
 * 
 * deleting:
 * We need to delete our object once we are done using it. If not, we run the 
 * risk of memory leakage. We delete object like so:
 * 
 *     delete mom3;
 * 
 * ********************************************************************************/

#include <iostream>
#include <string>
#include "Mother.h"
#include "Son.h"

using namespace std;

int main()
{
    Mother mom1("Susana");
    cout << mom1.getNumOfMothers() << endl;
    
    Mother mom2("Daniela");
    cout << mom2.getNumOfMothers() << endl;
    
    Mother* mom3;
    mom3 = new Mother("Christina");
    cout << mom3->getNumOfMothers() << endl;
    
    delete mom3;
    
    
    
    cout << Mother::getNumOfMothers() << endl;
    
}