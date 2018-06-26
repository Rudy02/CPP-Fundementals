#ifndef DAUGHTER_H
#define DAUGHTER_H
#include "Mother.h" // Added this to fix the compiling error;We need it!

class Daughter: public Mother
{
    public:
        Daughter();
        
};

#endif