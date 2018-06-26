#include <iostream>
#include <string>
#include "Dog.h"

using namespace std;

Dog::Dog(string a, int b)
: name(a), age(b)
{
    
}

void Dog::printInfo()
{
    cout << "Method #1: this->name = " << this->name << endl;
    cout << "Method #1: this->age = " << this->age << endl;
    cout << "Method #2: (*this).name =  " << (*this).name << endl;
    cout << "Method #2: (*this).age =  " << (*this).age << endl;
    cout << "---------------------------------------" << endl;

}