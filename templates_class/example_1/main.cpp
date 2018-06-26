/***************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program was designed to help us understand what a class template is.
 * A class template works like a function template, where T is a generic 
 * datatype. In this file, we created a class Data that takes in two 
 * parameters in the constructor of type T and assigns them to T first 
 * and T second. We also wrote a bigger() function to compare both variables.
 * The bigger() function has a return type T, again where T is a generic 
 * datatype of our choosing. 
 * 
 * Key notes to watch out for: 
 * 1. When making a member class of with a return type of T, we must use
 * the template <class T> above our function to specify what datatype we
 * are going to be using.
 * 
 * 2.Creating an object:
 * This is tricky because we are used to simply creating an object and 
 * not specifying what datatype we want to use. Here we have to specify
 * or else our code will produce errors. After declaring our class and 
 * before we name our object, we have to specify the datatype we will be
 * using. Look below for the example.
 * 
 * *************************************************************************/

#include <iostream>

using namespace std;

template <class T>
class Data
{
    T first, second;
    public:
        Data( T a, T b){first = a; second = b;}
    
        T bigger();
};

template <class T>
T Data<T>::bigger()
{
    return (first>second?first:second);
}

int main()
{
    /*
    We must include <int> because we need to specify what datatype we
    are going to be working with within our class template
    */
    Data <int> number(10, 20);
    cout << number.bigger() << endl;
}