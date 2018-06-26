/*******************************************************************************
 * Rodolfo Diaz
 * main.cpp: Color.h, Color.cpp, People.h, People.cpp
 * 
 * This program prints out my name and my favorite color. We do so using 
 * two classes: Color and People. We pass the Color object into the People
 * class in order to print out both name and favorite color. This program
 * is design to practice the concept of composition and member initializer
 * within the People constructor.
 * ****************************************************************************/

#include <iostream>
#include <string>
#include "Color.h"
#include "People.h"

using namespace std;

int main()
{
    Color colorObj("Blue");
    
    People me("Rudy",colorObj);
    
    me.printInfo();
    
}