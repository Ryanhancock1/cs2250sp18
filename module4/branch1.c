/*
 * =====================================================================================
 *
 *       Filename:  branch1.c
 *
 *    Description:  Basics of branching
 *
 *        Version:  1.0
 *        Created:  01/30/2018 08:51:46 AM
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

// Main Function
int main()
{
    int age = 0;
    int temp;
    printf("please enter age\n");
    scanf("%d", &age);
    printf("Age is %d\n", age);
    if(age>=18) //if true go inside the block.
    {
    printf("You can vote\n");
    }
    else // Do not use a ( ). This default case of False Case
    {
    temp = 18 - age;
    printf("You have %d years to vote\n", temp);
    }
    if(age>=21)
    {
    printf("You can drink legally\n");
    }
    else // Do not use a ( ). This default case of False Case
    {
    temp = 21 - age;
    printf("You have %d years to drink\n", temp);
    }
    // capital v to highlight 1 line
    if(age>=65)
    {
    printf("You can retire!\n");
    }
    else // Do not use a ( ). This default case of False Case
    {
    temp = 65 - age;
    printf("You have %d years to retire\n", temp);
    }
    if(age == 35)
    {
    printf("You are loved\n");
    }
    else
    {
    temp = 35 - age;
    printf("You have %d years to special age\n", temp);
    }
    printf("Adios amigo\n");

    return 0;
}
// Function Definitions


