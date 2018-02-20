/*
 * =====================================================================================
 *
 *       Filename:  hellofunc.c
 *
 *    Description:  Learn to use funtions
 *
 *        Version:  1.0
 *        Created:  02/20/2018 08:41:17 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Hello(void);
void HelloMany(int num);
int HelloNum(void);
int HelloNumMany(int num);
int MySquare(int n);
// Main Function
int main()
{
    Hello();
    Hello();
    HelloMany(3);
    int n = HelloNum();
    printf("I got %d from HelloNum()\n", n);
    n = HelloNumMany(5);
    printf("I got %d from HelloNumMany()\n", n);
    printf("The square of 9 is %d\n", MySquare(9));



    return 0;
}
// Function Definitions
// Retuns value takes in value
int MySquare(int n)
{
    
    return n * n;
}
// Funt hellonummay
// takes an integer
// ret sum of hello print statements
int HelloNumMany(int num)
{
    int count = 0;
    for(int i = 0; i < num; i++)
    {
        printf("%d) Hello NumMany\n", i);
        count++;
    }
    return count;
}
//hello num
int HelloNum(void)
{
    int num = 99;
    return num;
}
void Hello(void)
{
    printf("Hello Ogden World\n");
    return;
}

//funt; HEllo many
//prints message num times

void HelloMany(int num)
{
    for(int i = 0; i<num; i++)
    {
        printf("Weber State Great, Great, Great\n");
    }
    return;
}



