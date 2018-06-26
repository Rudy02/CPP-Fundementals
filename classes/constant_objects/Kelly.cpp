//Function Definitions for Kelly Class
#include "Kelly.h"
#include <iostream>

using namespace std;

Kelly::Kelly(){
}

void Kelly::printStuff(){
    cout << "I'm a regular function" << endl;
}

void Kelly::printStuff2() const{
    cout << "I'm a constant function" << endl;
}
