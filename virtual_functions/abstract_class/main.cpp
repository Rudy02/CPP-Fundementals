/************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This file is an extension of the enemy_example folder for virtual functions.
 * We look at what an abstract class is. In simple terms, an abstract class
 * is a class with a virtual function in it. That virtual function has a 
 * default piece of code that runs if the object's class doesn't have a 
 * function with a similar name.
 * ***********************************************************************/


#include <iostream>

using namespace std;

class Enemy
{
    public:
        virtual void attack(){ cout << "This is the Enemy's attack() function" << endl;}    //Made this a virtual function
};

class Ninja: public Enemy
{
    public:
        void attack(){cout << "Ninja attack!" << endl;}
};

class Monster: public Enemy
{
    public:
        //void attack(){cout << "Monster attack!" << endl;}
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