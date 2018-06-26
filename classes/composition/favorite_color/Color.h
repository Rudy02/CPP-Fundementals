#ifndef COLOR_H
#define COLOR_H

#include <string>
using namespace std;

class Color
{
    public:
        Color(string x);
        void print();
    private:
        string color;
};
#endif