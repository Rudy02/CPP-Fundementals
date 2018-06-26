/************************************************************************
 * Rodolfo Diaz
 * main.cpp
 * 
 * This program simply displays what value is a character and which isn't.
 * We do this by implementing template specialization where we have two
 * classes of the same name but take in different datatypes. 
 * The first template Class takes in a generic datatype T and the second
 * takes in a specific datatype of char. The compiler will recognize 
 * this difference if we specify what datatype we are passing in and 
 * work with the member functions associated with that particular class.
 * ***********************************************************************/


#include <iostream>

using namespace std;

template <class T>
class Spunky
{
    public:
        Spunky(T a){ cout << a << " is not a character!" << endl;}
};

template<>    //Leave the parameter black
class Spunky<char>
{
    public:
        Spunky(char a){ cout << a << " is a character!" << endl;}
};

int main()
{
    Spunky<int> objInt(20);
    Spunky<char> objCha('z');
    
}