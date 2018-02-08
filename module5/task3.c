/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  Multiplication table 1-10
 *
 *        Version:  1.0
 *        Created:  02/08/2018 08:52:19 AM
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
const int ROW = 10;
const int COL = 10;
// Function Prototypes

// Main Function
int main()
{
    for(int r = 1; r <= ROW; r++)
    {
        for(int c = 1; c <= COL; c++)
        {
            printf("[%3d]", r * c);
        }
        printf("\n");
        // value of c?? NO out of space
    }//end of row
    // value of c or r? no out of scope

    return 0;
}
// Function Definitions


