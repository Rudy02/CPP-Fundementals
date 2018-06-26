/******************************************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program serves as more practice working with files. Here we create a file called "dates.txt".
 * The file is opened and we output to the file the dates [0,9] of todays month. Once we are done 
 * iterating through that, we close the file and we're done. 
 * ****************************************************************************************************/


#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    //Output file: Write to the file "dates.txt"
    //If file isn't created, this line will create one for you
    //It will also open the file, easier to use than spliting creating and
    //opening a file in two seperate lines
    ofstream dateFile("dates.txt");    
    
    //Check if file is open
    if(dateFile.is_open())
    {
        for(int i = 0; i < 10; i++)
        {
            dateFile << 5 << "/" << i << "/" << 18 << endl;
        }
    }
    else
    {
        cout << "Error: File not open" << endl;
    }
    
    //Don't forget to close the file
    dateFile.close();
}