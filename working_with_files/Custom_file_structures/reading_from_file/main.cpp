/********************************************************************************
 * Rodolfo Diaz
 * main.cpp: players.txt
 * 
 * This program accesses the players.txt file and prints out the values in the 
 * terminal. What's cool about this is now we can read from a file and use that
 * data for anything. However, you must remember that files have structures.
 * In this case, we have:
 *                      Data ' ' Data ' ' Data
 * 
 * Three inputs of data and a space in between. Files can vary on how data can be
 * accessed but for our practice, we're using this. 
 * 
 * *******************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream theFile("players.txt");
    
    int id;
    string name;
    double money;
    
    if(theFile.is_open())    
    {
        while(theFile.good())    //use .good() and not .eof()
        {
            theFile >> id >> name >> money;
            cout << id << " " << name << " " << money << endl;
        }
    }
    else
    {
        cout << "File is not open" << endl;
    }
    
    //Side Note:
    //You don't really need to close file because the deconstructor of
    //ifstream will close it for you once it jumps out of scope or 
    //program is terminated. 
}