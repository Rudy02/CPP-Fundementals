/**********************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is designed to help us understand polymorphism. Polymorphism is the 
 * usage of similar named functions being called from different objects. 
 * When called, each object will know what to do.
 * 
 * Here we have two Enemies: a Ninja and Monster. Their goal is to attack you.
 * We create a base class Enemy with two derived classes: Ninja and Monster.
 * Both derived classes have an attack() function. They work a little different
 * but still do the same thing. Well, with polymorphism we can call both functions
 * from each object and not have to worry about how they attack, just as long as 
 * they attack.
 * 
 * The Base class Enemy helps us set an "attackPower" both derived classes will use.
 * Within the Enemy class, we have a mutator function to change the value of 
 * the "attackPower". That way, when both Ninja and Moster attack, they have their
 * own "attackPower". 
 * ******************************************************************************/

#include <iostream>

using namespace std;

class Enemy
{
    public:
        void setAttackPower(int a){ attackPower = a;}
        
    protected:
        int attackPower;
    
};

class Ninja: public Enemy
{
    public:
        void attack(){cout << "I'm a ninja, ninja chop! -" << attackPower << endl;}
    
};

class Monster: public Enemy
{
    public:
        void attack(){cout << "Monster must eat you!! -" << attackPower << endl;}
};

int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;    //We can do this because a Ninja is an Enemy
    Enemy *enemy2 = &m;
    
    enemy1->setAttackPower(29);
    enemy2->setAttackPower(40);
    
    n.attack();
    m.attack();
}