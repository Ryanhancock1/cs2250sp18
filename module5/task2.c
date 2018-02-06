/*
 * =====================================================================================
 *
 *       Filename:  task2.c
 *
 *    Description:  Prompt for positive number stay in loop until 
 *
 *        Version:  1.0
 *        Created:  02/06/2018 10:05:43 AM
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
{ int num = -1;
    while(num<0)
    {
    printf("Enter positive Number >=0\n");
    scanf("%d", &num);
    }
    printf("Done\n");

    return 0;
}
// Function Definitions


