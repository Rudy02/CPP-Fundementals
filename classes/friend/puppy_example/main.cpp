/******************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program was made to implement the usage of friend functions.
 * Friend functions can access the private attributes of a class
 * without it being a member functions pertaining to the class. 
 * Even though the friend function appears in the class definition, 
 * friends are not member functions of the class.
 * ****************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Puppy
{
    public:
        Puppy(){age=0;}
        
        friend void PuppyFriend(Puppy &pfo);
        friend void PuppyName(Puppy &pno);
       
    private:
        int age;
        string name;
        

};

void PuppyFriend(Puppy &pfo)
{
    pfo.age = 20;
    cout << pfo.age << endl;
}

void PuppyName(Puppy &pno)
{
    pno.name = "Epi";
    cout << pno.name << endl;
}

int main()
{
    Puppy epi;
    PuppyFriend(epi);
    PuppyName(epi);
}