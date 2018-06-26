#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
    public:
        Mother();
        
        static int getNumOfMothers();
        
    private:
        //This variable will be shared with every Mother object created
        static int numOfMothers; 
};

#endif