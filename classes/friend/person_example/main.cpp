/*****************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is meant to practice our understanding of friend
 * functions. We have a class Person with two friend functions that
 * access the name and age variables within the class attributes.
 * ***************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Person
{
    public:
        Person(){ name = "Rudy"; age=0;}
        void printInfo(){cout << name << " " <<  age << endl;}
        friend void age(Person &pa);
        friend void name(Person &pn);
        
    private:    
        string name;
        int age;
};

void age(Person &pa)
{
    pa.age = 28;
    cout << pa.age << endl;
}

void name(Person &pn)
{
    pn.name = "MFCosmos";
    cout << pn.name << endl;
}

int main()
{
    Person me;
    me.printInfo();
    age(me);
    name(me);
    me.printInfo();
}