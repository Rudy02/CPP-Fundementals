/*************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program takes two numbers and displays the smallest of the two.
 * This is done by creating a function template that takes in two 
 * parameters. Our function is called smaller(), with two parameters
 * T and U. T and U represent two generic variables to hold the data
 * type we are going to work with. 
 * 
 * Key note is that the return type may
 * only be one of the datatypes that we pass in. Since two are being 
 * passed in, the datatype chosen to be returned will by the first
 * to be passed in; in this case T.
 * 
 * **********************************************************************/

#include <iostream>

using namespace std;

template <class T, class U> //Assed another generic data type U
T smaller(T &a, U &b)
{
    return (a<b?a:b);  //Ternary Operators: (condition) ? (If TRUE) : (If FALSE)
}


int main()
{
    int x = 89;
    double y = 20.56;
    
    cout << smaller(x,y) << endl;
}