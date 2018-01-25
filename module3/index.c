/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  Use index notation to access string 
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:57 AM
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
    // define 2 strinngs
    // get first name infor
    // get last name info
    // display initial
char string1[15];
char string2[15];
    printf("Enter your first name\n");
        scanf("%s", string1);
    printf("Enter your Last name\n");
        scanf("%s", string2);
printf("Hello %s %s\n", string1, string2);
printf("Your initals are [%C%C]\n", string1[0], string2[0]);
//to access individual number of an array
//use index notation with [ ]

return 0;
}
// Function Definitions


