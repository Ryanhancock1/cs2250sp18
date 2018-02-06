/*
 * =====================================================================================
 *
 *       Filename:  while2.c
 *
 *    Description:  Infinite While loop
 *
 *        Version:  1.0
 *        Created:  02/06/2018 09:24:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Main Function
int main()
{
    int num = 2;
    int age = 21;
    while(num)
    {
        printf("Num [%d]\n", num);
        num--;
    }
    // this loop requires break statemnet
    while(1)
    {
        if(age == 0)
        {printf("Thank You\n");
        break;// out of loop
        // works on loop, switch blocks

        }
        printf("Your age is [%d]\n", age);
        age--;

    }
    printf("Done\n");
    return 0;
}
// Function Definitions


