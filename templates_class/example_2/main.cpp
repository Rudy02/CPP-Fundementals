/***************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is design to test our understanding of class Templates.
 * This file creates an object Calculator and has an add() function.
 * We split this class Template into three file and learn how to link
 * all three files for the program to run. 
 * We have done this before, but there is a linking problem when we try
 * doing this with three seprate files. There are ways to get around this
 * and in this file we go over two methods.
 * 
 * Method #1:
 * Add the source file as an include file in our main.cpp file. 
 * 
 * Method #2:
 * Add the source file into our header file and only run our main.cpp
 * and header file in the terminal. 
 * 
 * ***********************************************************************/


#include <iostream>
#include "Calculator.h" 
#include "Calculator.cpp"  //Method #1:Include the source file as well for linking issue

using namespace std;

int main()
{
    Calculator <long int> obj1(1000000000000, 1000000000000);
    cout << obj1.add() << endl;
    
    
}