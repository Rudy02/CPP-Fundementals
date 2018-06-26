#include <iostream>
#include <string>
#include "Mother.h"

using namespace std;


int Mother::numOfMothers = 0;

Mother::Mother()
{
    Mother::numOfMothers++;
}

Mother::Mother(string name)
{
    Mother::numOfMothers++;
    this->nameOfMother = name;
}

Mother::~Mother()
{
    cout << "Mother " << this-> nameOfMother << " was destroyed." << endl;
    Mother::numOfMothers--;
}

int Mother::getNumOfMothers()
{
    return numOfMothers;
}