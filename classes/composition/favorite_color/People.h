#ifndef PEOPLE_H
#define PEOPLE_H

#include "Color.h"
#include <string>

using namespace std;

class People
{
    public:
        People(string n, Color c);
        void printInfo();
    private:
        string name;
        Color favColor;
};
#endif