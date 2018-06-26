#ifndef MOTHER_H
#define MOTHER_H

class Mother
{
    public:
        int publicv;
        Mother();
        void changePrivate(int); //Mutator
        void set();
        void printInfo();       //Accessor
    protected:
        int protectedv;
    
    private:
        int privatev;
        
};

#endif