/*******************************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is designed to just practice more regarding "try", "throw", "catch".
 * Here we compare two variables: olderBrother and youngestBrother. We know that your
 * oldest brother cannot be your youngest brother. But if that should occur, we "throw"
 * and error to catch() and display the error on the console. 
 * *****************************************************************************************/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        string olderBrother = "Art";
        string youngestBrother = "Tavo";
        
        if(olderBrother.compare(youngestBrother))
        {
            throw 22;
        }
    }catch(int x)
    {
        cout << "Older brother cannot be your youngest brother: Error " << x << endl;
    }
}