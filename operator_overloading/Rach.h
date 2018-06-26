#ifndef RACH_H
#define RACH_H
#include <string>

class Rach
{
    public:
        int num;
        std::string name;
        
        Rach();
        Rach(int);
        Rach(std::string);
        void printInfo();
        
        Rach operator+(Rach);
        Rach operator-(Rach);
};

#endif