#include <iostream>
#include "Mother.h"

using namespace std;

Mother::Mother()
{
    
}

void Mother::changePrivate(int x)
{
    privatev = x;
}

void Mother::set()
{
    privatev = 100;
}

void Mother::printInfo()
{
    cout << privatev << endl;
}