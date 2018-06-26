/************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program was designed to further our understanding of template
 * specialization. Here we have a Brother class that can take in a 
 * generic datatype or an int datatype; depending on what we specify
 * it to. 
 * Its a simple class that just helps us practice the concepts we've 
 * been studying. Ex: templates, classes, functions, encapsulation, etc.
 * *********************************************************************/


#include <iostream>
#include <string>

using namespace std;

template <class T>
class Brother
{
    public:
        Brother(T a){identifier = a;}
        void printInfo(){cout << "Brother: " << identifier << endl;}
        
    private:
        T identifier;
};

template <>
class Brother<int>
{
    public:
        Brother(string a, int b){identifier = a; numID = b;}
        void printInfo(){
            cout << "Brother: " <<  identifier << 0 << numID << endl;
        }
        
    private:
        string identifier;
        int numID;
};

int main()
{
    Brother<string> Oldest("Art");
    Brother<int> secondOldest("Etbo",827);
    Brother<string> youngest("Tavo");
    
    Oldest.printInfo();
    secondOldest.printInfo();
    youngest.printInfo();

}