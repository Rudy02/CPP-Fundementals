#include <iostream>
#include "Rach.h"
#include <string>

using namespace std;

Rach::Rach()
{
}

/*
* This may seem weird to do, but we set num to 0 because if we 
* output the num value without initializing it, the program may
* crash
*/
Rach::Rach(string n)
: name(n)
{
    num = 0;
}

Rach::Rach(int number)
:num(number)
{
    name ="";
}

void Rach::printInfo()
{
    cout << this->name << endl;
    cout << this->num << endl;
}

Rach Rach::operator+(Rach aro)
{
    Rach brandNew;
    brandNew.num = num + aro.num;
    return(brandNew);
}

Rach Rach::operator-(Rach arom)
{
    Rach brandNewNum;
    brandNewNum.num = num - arom.num;
    return(brandNewNum);
}