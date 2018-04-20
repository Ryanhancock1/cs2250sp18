/*
 * =====================================================================================
 *
 *       Filename:  ryan_hancock_exam2_task1.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:27:12 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> //for c
#include <stdlib.h>
//#include <iostream> //for c++
//using namespace std; //for c++

// Constants

// Function Prototypes
typedef struct Mytime_t
{
    int hour;
    int minutes;
    int seconds;
}MyTime;
int ElapseTime(int time1, int time2);
// Main Function
int main()
{ 
    MyTime time1;
    MyTime time2;

    time1.hour= 3;
    time1.minutes= 45;
    time1.seconds= 15;

    time2.hour= 9;
    time2.minutes= 44;
    time2.seconds= 3;

    printf("%d %d\n", time1.hour, time2.hour);

    return 0;
}
// Function Definitions
int ElapseTime(int time1,int time2)
{ 
    return 0;

}

