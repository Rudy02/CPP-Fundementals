#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string getWhatTheyWant()
{
    string choice;
    
    cout << "1 - plain item" << endl;
    cout << "2 - helpful item" << endl;
    cout << "3 - harmful item" << endl;
    cout << "4 - quit program" << endl;
    
    
    while(cin >> choice)
    {
        cout << "Error! Wront input! Try again!" << endl;
        
        cout << "Choice #2: " <<choice << endl;
    
        if(choice == "4")
        {
            cout << "Break out of here!" << endl;
            return choice;
        }
         else
         {
        
         cin.clear();
         cout << "Enter a number !!!!: ";
         }
    }
    cout << "While Check: Last line, double check while is working!" << endl;
}

int main()
{
    string whatTheyWant = getWhatTheyWant();
    
    cout << "The end product is: " << whatTheyWant << endl;
}