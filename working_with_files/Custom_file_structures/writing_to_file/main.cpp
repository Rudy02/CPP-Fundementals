/**********************************************************************************
 * Rodolfo Diaz
 * main.cpp: players.txt
 * 
 * This program accepts three forms of information and outputs it to a file
 * calles "players.txt". The concept behind this program is to study with 
 * custom file structures. In this case, we use the <fstream> library to open,
 * work with, and close the file. After the user is done inputting information,
 * we close it using Ctrl+D on the terminal to indicate the end of input command.
 * 
 * File Structure: The following is the file structure for the player.txt file.
 * We need to know this structure because it makes it easier for us to access the
 * information within the file we will be using.
 * 
 * Structure:        Data #1 'space' Data #2 'space' Date #3 endl
 * 
 * Issue #1: On our first run, is ran like we planned it. However, there were
 * some issues. Example: Once we run the program, if we re-run it again, the
 * "player.txt" file would reset to a blank file.
 * 
 * Issue #1 fixed: After some research on file structures, we added "ofstream::app"
 * to append any new information in our file rather then overwritting it.
 * 
 * ********************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream players("players.txt", ofstream::app);    //Added the app associated with ofstream
    
    cout << "Enter Player ID, Name, and Salary" << endl;
    cout << "press Ctrl+D to quit\n" << endl;
    
    int idNumber;
    string name;
    double money;
    
    while(cin >> idNumber >> name >> money)
    {    
        if(players.is_open())
        {
            players << idNumber << ' ' << name << ' ' << money << endl;
        }
        
    }
    players.close();
}