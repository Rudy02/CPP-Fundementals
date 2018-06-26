/******************************************************************
 * Rodolfo Diaz
 * main.cpp: Liz.h, Liz.cpp
 * 
 * In this file, we go over how to initilize member attributes when
 * you have a constant attribute associated with a class. If no 
 * constant variable were used, we can initialize the variable like 
 * normal inside the constructor. However, with the presence of a
 * constant variable, we need to initialize it by making a form of
 * "list" while defining our class constructor. Look at Liz.cpp for 
 * the example.
 * ****************************************************************/

#include <iostream>
#include "Liz.h"

using namespace std;

int main()
{
    Liz obj(19, 3);
    
    obj.print();
    
}