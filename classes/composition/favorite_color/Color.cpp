#include <iostream>
#include <string>
#include "Color.h"

using namespace std;

Color::Color(string x)
{
    color = x;
}

void Color::print()
{
    cout << "favorite color is " << color << endl;
}