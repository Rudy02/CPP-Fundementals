/************************************************************************
 * Rodolfo Diaz
 * main.cpp: Dog.h, Dog.cpp
 * 
 * This program prints out the name and age of two dog objects. I wrote this
 * to practice and further my understanding of the "this" pointer. 
 * **********************************************************************/

#include <iostream>
#include "Dog.h"
#include <string>

using namespace std;

int main()
{
    Dog firstDog("Lucky", 10);
    Dog secondDog("Spot", 5);
    
    firstDog.printInfo();
    secondDog.printInfo();
}