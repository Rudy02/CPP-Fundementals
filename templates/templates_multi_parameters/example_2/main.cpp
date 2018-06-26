/********************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program was designed to help us practice passing multiple 
 * parameters into a function template. In this case, we created 
 * a function reverseString()to reverse a string and addString() to append
 * two string together.
 * *************************************************************************/

#include <iostream>
#include <string>

using namespace std;

void reverseString(string &a)
{
    int size = a.length();
    for (int i = 0; i < size/2; i++)
    {
        char temp = a[i];
        a[i] = a[size-i- 1];
        a[size-i-1] = temp;
    }
}

template <class T, class U>
T addString(T &a, U &b)
{
    a.append(" ");
    a.append(b);
    
    return a;
}

int main()
{
    string name = "Rudy";
    cout << "Original string: "<< name << endl;
    reverseString(name);
    cout << "String reversed: " << name << endl;
    reverseString(name);
    
    string lastName = "Diaz";
    cout << "Last name: " << lastName << endl;
    
    string fullName = addString(name, lastName);
    
    cout << "Both first and last name: " << fullName << endl;
    
    string ab = "ab";
    char *letter1 = &ab[0];
    char *letter2 = &ab[1];
    
    cout << *letter1 << *letter2 << endl;
}