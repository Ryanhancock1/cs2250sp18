/*
 * =====================================================================================
 *
 *       Filename:  branch2.c
 *
 *    Description:  test switch statement. Only works on int, single char
 *
 *        Version:  1.0
 *        Created:  01/30/2018 09:29:57 AM
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
    int pos = 0;
    printf("What is your position?\n");
    scanf("%d", &pos);
    switch(pos)
    {
        case 1: //if (pos == 1)
            printf("You get Gold Medal\n");
            break; // leave the switch block
        case 2: // is pos ==2
            printf("You get Silver Medal\n");
            break;
        case 3: // if pos == 3
            printf("You get Bronze Medal\n");
            break;
        case 28:
        case 14:
        case 36: // if pos == 14
            printf("You get Plastic Medal\n");
            break;
        default: // else
            printf("You get Nothing\n");
    }

    return 0;
}
// Function Definitions


