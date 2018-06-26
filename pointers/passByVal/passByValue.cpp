/********************************************************************
 * Rodolfo Diaz
 * passByValue.cpp
 * 
 * In this file, we add two interger values a and b by passing them
 * as parameters within a template function. The values a and b are
 * passed by value, thus the values will be copied in order for 
 * them to be used. 
 * *****************************************************************/


#include <iostream>

using namespace std;

template <class T>
T adding( T value1, T value2)
{
    int sum = value1 + value2;
    return sum;
}

int main()
{
    int a = 2, b =3;
    
    int sum = adding(a,b);
    cout << "Sum is: " << sum << endl;    
}
