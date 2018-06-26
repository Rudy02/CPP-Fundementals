#include <iostream>
#include <string>
#include "People.h"
#include "Color.h"

using namespace std;

People::People(string n, Color c)
: name(n), favColor(c)
{
}

void People::printInfo()
{
    cout << name << "'s ";
    favColor.print();
}