#include <iostream>
#include "Mother.h"

using namespace std;



Mother::Mother()
{
    Mother::numOfMothers++;
}

int Mother::numOfMothers = 0;

int Mother::getNumOfMothers()
{
    return numOfMothers;
}