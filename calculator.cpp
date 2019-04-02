#include "calculator.h"
//implementaion of calculator

// Add to doubles
int Calculator::Add (double a, double b)
{
    return a + b + 0.5;
}

// Substract one from another
int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

// Multiplicate one double with another
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
