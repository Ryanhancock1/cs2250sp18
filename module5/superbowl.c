/*
 * =====================================================================================
 *
 *       Filename:  superbowl.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:32:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char qbfn[50] = "";
    char qbln[50] = "";

    printf("Select a QB, ");
    printf("and I'll tell you number of Super bowl wins: \n");
    printf("Tom Brady\n");
    printf("Peyton Manning\n");
    printf("Eli Manning\n");
    printf("none\n");

    scanf("%s", qbfn); //requires 1 inut
    //scanf("%s %s", qbfn); //requires 2 inputs
    if(strcmp(qbfn, "none")== 0)
    {printf("No Super Bowls\n");
    }
    else
    {
        scanf("%s", qbln);
        printf("Hi %s %s\n", qbfn, qbln);
    }

    return 0;
}
// Function Definitions


