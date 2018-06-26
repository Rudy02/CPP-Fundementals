/**********************************************************
 * Rodolfo Diaz
 * main.cpp: Crayons.h, Crayons.cpp, Color.h, Color.cpp
 * 
 * This program was design to further practice the concept
 * of inheritance from a base class to a derived class.
 * We have two classes: Base Class Crayons and derived class
 * Color. All this program does is print out which colors
 * are in the box of crayons. 
 * *********************************************************/

#include <iostream>
#include "Crayons.h"
#include "Color.h"

using namespace std;

int main()
{
    Crayons first;
    first.printColors();
    
    Color second;
    second.printColors();
}