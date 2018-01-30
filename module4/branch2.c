/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  test for race medals
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:29:57 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    if(pos == 1)
    {
    printf("You get Gold Medal\n");
    }
    if(pos == 2)
    {
    printf("You get Silver Medal\n");
    }
    if(pos == 3)
    {
    printf("You get Bronze Medal\n");
    }
    if(pos>3)
    {
    printf("You get Nothing\n");
    }

    return 0;
}
// Function Definitions


