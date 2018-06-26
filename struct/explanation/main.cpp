/***************************************************************************
 * File: main.cpp
 * Author: Rodolfo Diaz
 * 
 * Description: This program was designed to teach us what and how a struct 
 * is used in C++.
 * 
 * A structure, or struct, is essentially a class! The main difference is that
 * in a class its default setting is set to private if you dont explicitly write 
 * "public:" inside the class definition.
 * 
 * A struct by default is set to public. If you want to set anything inside the
 * struct to private, you have to explicitly write "private:". That's it!
 * 
 * Why is it in there? C++ is a derived language of C. In C, there is no class
 * keyword. They have struct and more so, to maintain backwards compatibility
 * with C, C++ was created with this feature in mind.
 * ****************************************************************************/
 
#include <iostream>

using namespace std;

//Like a class, notice that there is no "public:"
//This is public by default if no "private:" is written
struct Person
{
    void setName(string x){ name = x;}
    string getName(){return name;}
    //
    private:
        string name;
    
};

//Like a struct, notice that there is a "public:"
//This is private by default if no "public:" is written
class Person2
{
    public:
    void setName2(string y){ name2 = y;}
    string getName2(){return name2;}
    
    private:
        string name2;
};

int main()
{
    //A struct object
    Person person1;
    person1.setName("Rudy");
    string theName = person1.getName();
    cout << theName << endl;
    
    //A class object
    Person2 person2;
    person2.setName2("Rudy2");
    string theName2 = person2.getName2();
    cout << theName2 << endl;
    
}