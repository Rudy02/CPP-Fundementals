#include <iostream>

using namespace std;

//Global Variable
int number = 1;

int main()
{
    //Local Variable
    double number = 2;
    
    cout << "This is the local variable: " << number << endl;
    cout << "This is the global variable: " << ::number << endl;
}