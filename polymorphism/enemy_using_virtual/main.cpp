/**********************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program is an extension of our enemy example program. Here we apply virtual
 * functions to make it easier to call the attack() function for the Enemy objects
 * we created. These Enemy objects point to the Ninja and Monster objects, we access
 * their attack() function straight from their associated Enemy objects. 
 * 
 * What's the point? It makes it easier for us to access member functions without
 * bouncing from object to object. It's cleaner and easier to understand. 
 * 
 * ******************************************************************************/

#include <iostream>

using namespace std;

class Enemy
{
    public:
        void setAttackPower(int a){ attackPower = a;}
        virtual void attack(){}    //Added this virtual function
        
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
    
    /*
    Added the following below:
    Instead of using the Ninja and Monster Objects to call attack()
    We can now use the Enemy object to call attack() via the virtual function
    n.attack();
    m.attack();
    */
    
    enemy1->attack();
    enemy2->attack();
}