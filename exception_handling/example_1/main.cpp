/*************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is designed to implement the concept of "try", "throw",
 * and "catch()". This is primarily used when doing exceptions; a way of
 * checking for any possible situation that is rare, but still might want
 * to take it into account so your program doesn't crash.
 * 
 * Here we have two variables: momsAge and sonsAge. We check the condition
 * of whether the sonsAge is greater than the momsAge. This can't happen 
 * in real life, but if it occurs within our program; We want to be ready.
 * Try:
 *     try this piece of code and check the condition set inside.
 * Throw:
 *     throw an error number. This helps you check where the error occured.
 *     Also, throw throws back that integer into the following "catch()" 
 *     function.
 * Catch:
 *     Catches any thing thrown at it and uses it for anything you want to 
 *     use it for. IN this case, we use it to catch our error number that
 *     was in "throw". We pass that value into catch as a parameter and 
 *     display it on our console. 
 * 
 * *************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    try
    {
        int momsAge = 30;
        int sonsAge = 34;
        
        if(sonsAge > momsAge)
        {
            throw 122;
        }
    }
    catch(int x) // Or you can use "..."; still need to look into this
    {
         cout << "Son cannot be older than Mom, Error Number: " << x <<endl;   
    }
}