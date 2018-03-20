/*
 * =====================================================================================
 *
 *       Filename:  mulitparam.c
 *
 *    Description:  Pass multiple params to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants
struct Dude
{
    int age;
    double weight;
}; //do not forget semi colon
typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; //do not forget semi colon

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);


// Main Function
int main()
{
    int a = 17;
    double w = 205.5;
    struct Dude man1;
    man1.age = 32;
    man1.weight = 203;
    ShowInfo(a,w);
    ShowInfo(man1.age,man1.weight);
    
    SuperDude man2;
    man2.age = 32;
    man2.weight = 203;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    return 0;
}
// Function Definitions
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  display age using ,cfu
 * =====================================================================================
 */
void ShowInfo(int age,double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowinfoStruct
 *  Description:  display super dude info
 * =====================================================================================
 */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.2lf]\n",sd.weight);
    printf("Your sex is %c \n", sd,sex);

    return;
}

