/*
 * =====================================================================================
 *
 *       Filename:  string.c
 *
 *    Description:  first use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:55 AM
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
    char name[10]; // allocate 20 chars + null
    printf("Enter your name:\n");
    scanf("%s", name);
    // if you use an array, for an example a string
    // do not use the "&" sign
    // 2) Input ends with a space
    printf("Your name is [%s]\n", name);



    return 0;
}
// Function Definitions


