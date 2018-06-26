#include <iostream>
#include "Calculator.h"

using namespace std;

template <class T>
Calculator<T>::Calculator(T a, T b)
{
    num1 = a;
    num2 = b;
}

template <class T>
T Calculator <T>::add()
{
    return num1 + num2;
}