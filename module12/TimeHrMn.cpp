/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:59:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //for c
#include <iostream> //for c++
using namespace std; //for c++
#include "TimeHrMn.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    TimeHrMn::TimeHrMn()
    {
        hours = 0;
        min = 0;
        return;
    }
    TimeHrMn::TimeHrMn(int h, int m)
    {
        hours = h;
        min = m;
        return;
    }
    void ShowTime() const
    {
        cout<<"Hour "<<this->hour<<endl;
        cout<<"Age "<<this->min<<endl;

    }
    TimeHrMn operator+(TimeHrMn rhs)
    {
        TimeHrMn tmp;
        tmp.hours = hours + rhs.hours;
        tmp.min = min = rhs.min;

        return tmp;

    }


    return 0;
}
// Function Definitions


