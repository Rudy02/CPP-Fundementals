/**************************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program introduces us to file handling. If we want to save data from
 * our program after it terminates, we'll need to make some sort of a database.
 * File handling is like that, which is great. And in C++, you'll be dealing with
 * plenty of files.
 * 
 * Step #1: #include <fstream>
 * The library file stream will be needed to create, write, and access a file. 
 * 
 * Step #2: ifstream/ofstream nameOfFile
 * we create an object of a file. There are different ways of doing this. Two 
 * examples are:
 *     ifstream: Stream class to read from a file.
 *     ofstream: Stream class to write to a file.
 * 
 * Step #3: Opening the file
 * Once you create a file, you want to open it. This has to be done or else
 * you want be able to access the file. Also, you'll notice that when you 
 * deal with files, you want to make sure the file is open. So you'll see
 * alot of "the is_open()" function to check if the file is indeed open.
 * 
 * Step #4: Writing to the file
 * Instead of using "cout" to print thing to the terminal. We can output to 
 * the file by following this form:
 * 
 *     file_name << "Whatever you want" << /n;
 * This will output into the file and in doing so, you're practically writing
 * into the file. 
 * 
 * Step #5: Closing the file
 * You always want to make sure the file is closed once you're done using it. 
 * This has to be done for memory reason. If it's not closed and an infite loop
 * is going on, you can run out of memory. Just an possible situation.
 * 
 * *************************************************************************************/



#include <iostream>   //work with input,output
#include <fstream>    //to work with files

using namespace std;

int main()
{
    //Create the file
    ofstream nameFile;
    
    //Open the file
    nameFile.open("brothers.txt");
    
    //Check that the file is open
    if (nameFile.is_open())
    {
        //Your code here
        nameFile << "Art" << endl;
        nameFile << "Beto" << endl;
    }
    else 
    {
        cout << "Error: file not open" << endl;
    }
    
    //Close the file once you're done using it
    nameFile.close();
}