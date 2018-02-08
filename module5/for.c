/*
 * =====================================================================================
 *
 *       Filename:  for.c
 *
 *    Description:  Practice with for loop
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:35:44 AM
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
    // For Loop
    // 1) init your condition
    // 2) Do work
    // 3) Update condition
    // 4) if still true continue, else finish loop
    int rounds = 3;

    while(rounds != 0)
    {
        printf("Hello there while\n");
        rounds -= 1;
    }
    rounds = 4;
    for(int r = 0; r<rounds; r++)
    {
        printf("Hello there for\n");
    }
    printf("round [%d]\n", rounds);
    printf("round [%d]\n", rounds++);
    printf("round [%d]\n", rounds);
    printf("round [%d]\n", ++rounds);

    return 0;
}
// Function Definitions


