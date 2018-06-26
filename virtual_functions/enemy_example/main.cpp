/************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program expands on our understanding of polymorphism as we introduce
 * virtual functions. From our last example, we had the same base class Enemy
 * with our two derived classes: Ninja and Monster. The difference between 
 * the last example and this one is how we call the attack() functions within
 * our objects. 
 * 
 * In the last example, we called the attack() function like this:
 * 
 *     enemy1->setAttackPower(20);
 *     enemy2->setAttackPower(40);
 *     n.attack();    //n is the Ninja object that enemy1 points to
 *     m.attack();    //m is the Monster object that enemy2 points to
 * 
 * With the use of virtual functions, we can avoid bouncing around with 
 * which Object to use in order to call the attack() function.
 * 
 *     enemy1->setAttackPower(20);
 *     enemy2->setAttackPower(40);
 *     enemy1->attack();
 *     enemy2->attack();
 * 
 * As you can see, instead of bouncing around with the objects, we can simply
 * call the attack() functions based on the address that the Enemy object
 * is pointing to.
 * 
 * Any class that inheriates virtual functions from the base class becomes a
 * polymorphic class.
 * 
 * We can call the same function() from the same "type of object" and produce
 * different results based on what address the object is pointing to.
 * ***********************************************************************/


#include <iostream>

using namespace std;

class Enemy
{
    public:
        virtual void attack(){}    //Made this a virtual function
};

class Ninja: public Enemy
{
    public:
        void attack(){cout << "Ninja attack!" << endl;}
};

class Monster: public Enemy
{
    public:
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