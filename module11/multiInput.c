/*
 * =====================================================================================
 *
 *       Filename:  multiInput.c
 *
 *    Description:  MULTI INPUTS WITH SCANF
 *
 *        Version:  1.0
 *        Created:  04/03/2018 08:42:27 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void Help(void);
// Main Function
int main()
{
    //int feet, in;
    //printf("Enter feet and inches separated by a space\n");
    //scanf("%d %d",&feet, &in );
    //printf("You entered %d feet and %d inches\n", feet, in);
    printf("Please enter the time in this format HH:MM AM/PM\n");
    int hour = 0;
    int min = 0;
    char AMPM[3];

    if(scanf("%2d:%2d %2s", &hour, &min, AMPM) != 3)
    {
        Help();
    }
    else
    {
    printf("You entered %2d:%2d %s\n", hour, min, AMPM);
    }

    return 0;
}
// Function Definitions
void Help(void)
{
    printf("Bad Format. Please make sure you enter time as shown below\n");
    printf("Format HH:MM AM/PM\n");
}

