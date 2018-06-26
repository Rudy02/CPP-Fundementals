/*************************************************************
 * Rodolfo Diaz
 * main.cpp: Mother.h, Mother.cpp, Daughter.h, Daughter.cpp
 * 
 * This program illustrates how public, protected, and private
 * members work with two classes: Mother and Daughter. We also
 * go over the usage of the initial scope resolution operator.
 * Alongside a qualified-id, we can access the base class member
 * functions via the derived class.
 * Below is an explanation and an access diagram for each.
 * 
 * public: These members can be accessed publicly (by anyone).
 * 
 * protected: These can be inherited and accessed by any derived 
 * class. But if it isnt derived or pertain to the same class,
 * it cannot be accessed
 * 
 * private: These cannot be inherited by a class or accessed by
 * anything other than the class they belong to. 
 * They are passed solely due to member functions who need those
 * private variables. I need to look further into this.
 * 
 * --------------------------------------------------------
 * |        Access         | public | protected | private |
 * --------------------------------------------------------
 * Members of same class   |  Yes   |   Yes     |    Yes   
 * Members of derived class|  Yes   |   Yes     |    No
 * Not members             |  Yes   |    No     |    No
 * --------------------------------------------------------
 * 
 * :: is the initial resolution operator function
 * Mother:: = Mother is a qualified-id
 * 
 * ***************************************************************/
 
#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

int main()
{
    Daughter tina;
    tina.Mother::set();              //Using Qualified-id
    tina.Mother::printInfo();
    
    tina.doSomething();
    cout << "This is publicv: " << tina.publicv << endl; 
    cout << "Protectedv cannot be accessed without an accessor function within the base or derived class." << endl;
    cout << "Protectedv is: "; 
    tina.printProt();
    
    cout << "Privatev cannot be accessed because it is private" << endl;
    cout << "But we can alter it using a Mutator function within the base class" << endl;
    
    tina.Mother::changePrivate(25);    //Using Qualified-id
    
    cout << "Privatev can be accessed via Accessor functions in the Base Class using a qualified-id." << endl;
    cout << "Privatev in Mother is: ";
    tina.Mother::printInfo();
    
}