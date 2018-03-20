/*
 * =====================================================================================
 *
 *       Filename:  mulitparam.c
 *
 *    Description:  Pass multiple params to functions
 *
 *        Version:  1.0
 *        Created:  03/20/2018 08:44:40 AM
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

// Main Function
int main()
{
    int a = 17;
    double w = 205.5;
    struct Dude man1;
    man1.age = 32;
    man1.weight = 203;
    ShowInfo(a,w);
    ShowInfo(man1.age,man1.weight);
    
    SuperDude man2;
    man2.age = 32;
    man2.weight = 203;
    man2.sex = 'M';
    ShowInfoStruct(man2);

    return 0;
}

