/*****************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program shows how function Templates work. Here we created a 
 * function template called addCrap() that adds two values together. 
 * Instead of passing just a single datatype through the function, we 
 * can pass others as well if we make a function template. 
 * 
 * We do this by adding the following as we create our function:
 * 
 * template <class T>
 * T function_name (T parameter_1, T parameter_2)
 * 
 * Here, T represents a generic datatype. It can be an int, float, double,etc.
 * The beauty of this is that you don't have to make different functions that
 * are dependent on the datatype. With the use of a template, you can pass
 * any datatype.
 * Keep note: T can only represent one datatype. If you was an int and a string,
 * the computer will not know which type of data you want to return. Well, there
 * is a way, but for now we are sticking with this. 
 * **************************************************************************/


#include <iostream>

using namespace std;

template <class T> 
T addCrap( T &a, T &b)
{
    return a + b;
}

int main()
{
    int a = 1;
    int b = 2;
    int sum = addCrap(a,b);
    
    cout << sum << endl;
}