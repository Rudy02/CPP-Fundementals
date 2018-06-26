/************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is an extension of the file within our enemy_example folder.
 * In this file, we go over what a Pure Virtual Function is. In short, 
 * a pure virtual function is a virtual function that does nothing at all.
 * However, it does have a functionality. That being that each derived class
 * must have a function that will overwrite the virtual function if you want
 * to use said function. 
 * 
 * A regular virtual function will overwrite (or use) the default code within
 * it if you call that function from an object that doesn't have that virtual
 * function. 
 * Yet, a pure virtual function will not overwrite it. Your code wont run
 * because the compiler expects that each object using a virtual function 
 * does indeed have one to use.
 * ***********************************************************************/


#include <iostream>

using namespace std;

class Enemy
{
    public:
        virtual void attack()=0;    //This a pure virtual function
};

class Ninja: public Enemy
{
    public:
        void attack(){cout << "Ninja attack!" << endl;}
};

class Monster: public Enemy
{
    public:
        //If we comment this out, the program will not run because
        //Enemy is a pure virtual function
        void attack(){cout << "Monster attack!" << endl;}
};

int main()
{
    Ninja n;
    Monster m;
    
    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;
    
    enemy1->attack();
    enemy2->attack();
    
    
}