
#ifndef GPACALC_H_
#define GPACALC_H_

#include <iostream>
#include <cctype>
#include <iomanip>

class GpaCalc 
{
public:
    static void getGPA();
private:
    static int toGV(char);
};

#endif