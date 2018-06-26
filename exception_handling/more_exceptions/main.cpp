/*******************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program adds more practice to our understanding of exceptions.
 * Here we learned that we can have more than one catch() function. We also
 * learned that we can pass "..." as a parameter in our catch() function.
 * This means that instead of passing a simple int, double, 'char', etc.
 * We can just write "..." to catch anything thrown at it. That being said, 
 * the most thing you'll see being passed into catch() will be "..."
 * ****************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    try
    {
        int num1;
        cout << "Enter first number" << endl;
        cin >> num1;
        
        int num2;
        cout << "Enter second number"  << endl;
        cin >> num2;
        
        if(num2 == 0)
        {
            throw 0;
        }
        cout << num1/num2 << endl;
    }
    catch(int x)
    {
        cout << "You can't divide by " << x << endl;
    }
    //Can also have multiple catch() functions
    catch(...)    //Default: can basically catch any datatype
    {
        cout << "You can't divide by 0" << endl;
    }
}