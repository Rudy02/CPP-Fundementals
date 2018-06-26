#ifndef CALCULATOR_H
#define CALCULATOR_H

template <class T>
class Calculator
{
    public:
        Calculator(T a, T b);
        T add();
        
    private:
        T num1;
        T num2;
};

//Method#2: Include the source file and just run the main and header file
//#include "Calculator.cpp"
#endif