/*
 * =====================================================================================
 *
 *       Filename:  charComp.c
 *
 *    Description:  Learn operation on chars
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:43:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h> // for character operations
// Constants

// Function Prototypes

// Main Function
int main()
{
    char num;
    printf("Enter a number 0-9\n");
    scanf("%c", &num);
    if(num == '0')
    {
        printf("You entered 0\n");
    }
    else
    {
        printf("You entered non-zero [%c]\n", num);
    }
    if( isalpha(num) != 0 ) // A-Z ad a-z
    {
        printf("It is alpha\n");
    }
    else if(isdigit(num) != 0)
    {
        printf("it is a digit\n");
    }
    else
    {
        printf("You are not alpha\n");
    }

    return 0;
}
// Function Definitions


