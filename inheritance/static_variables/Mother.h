#ifndef MOTHER_H
#define MOTHER_H
#include <string>


class Mother
{
    public:
        Mother();
        Mother(std::string name);
        ~Mother();
        
        //Need to add a static function to access a static variable
        static int getNumOfMothers();
        
    private:
        //This variable will be shared with every Mother object created
        static int numOfMothers; 
        std::string nameOfMother;
};

#endif