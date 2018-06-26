#include <iostream>
#include "Daughter.h"

using namespace std;


Daughter::Daughter()
{
    
}

void Daughter::doSomething()
{
    publicv = 1;    //This is allowed to access
    protectedv = 2; //This is allowed to acceess
    //privatev = 3;   //This is NOT allowed to access
}

void Daughter::printProt()
{
    cout << protectedv << endl;
}