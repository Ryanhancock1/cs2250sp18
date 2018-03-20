/*
 * =====================================================================================
 *
 *       Filename:  testmultidudes.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:37:51 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include "dude.h"

// Constants

// Function Prototypes

// Main Function
int main()
{
    SuperDude s1, s2;
    InitInfoStruct(&s1);
    ShowInfoStruct(&s1);
    s2 = CopyInfoStruct(&s1);
    ShowInfoStruct(&s2);

    return 0;
}
// Function Definitions


