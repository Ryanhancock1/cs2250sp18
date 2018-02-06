/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Multiplication tables
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:37:46 AM
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
const int min = 1;
const int max = 10;
// Function Prototypes

// Main Function
int main()
{
int topnum = min;
int sidenum = min;
while(topnum <= max)
{
    while(sidenum <= max)
    {
        printf("%3d ", sidenum * topnum);
        sidenum += 1;
    }
    printf("\n");
    sidenum = min;
    topnum += 1;
}

    return 0;
}
// Function Definitions


