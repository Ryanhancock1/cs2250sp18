/*
 * =====================================================================================
 *
 *       Filename:  array.c
 *
 *    Description:  learn how arrays work
 *
 *        Version:  1.0
 *        Created:  02/13/2018 08:44:32 AM
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
const int LEN = 25;
// Function Prototypes

// Main Function
int main()
{
    int ar[LEN];
    ar[0] = 33;//first member
    ar[1] = 22;
    ar[2] = 66;
    ar[3] = 99;//fourth member

    printf("First value %d\n", ar[0]);
    printf("Fourth value %d\n", ar[3]);
    // Initialize full array
    for(int i = 0; i< LEN; i++)
    {
        //initalize number divisible by 3
        //to 0, else set to 99
        if( (i % 3) == 0)
        {
            ar[i] = 0;
        }
        else{
        ar[i] = 99;}
    }

    // iterate full array
    for(int i = 0; i<LEN; i++)
    {
        printf("The %d value of %d\n",i,ar[i]);
    }

    return 0;
}
// Function Definitions


