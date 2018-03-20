/*
 * =====================================================================================
 *
 *       Filename:  superlib.c
 *
 *    Description:  super funtion definitions
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:37:22 AM
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
#include "superlib.h"
#include <ctype.h>
// Function Definitions
void StrSpaceToHyphen(char modString[], char sep)
{
    int i = 0;
    for(i = 0; i < strlen(modString); ++i)
    {
        if(modString[i] == ' ')
        {
            modString[i] = sep;
        }
    }
return;
    }
//function counts number of digits 0-9 in a string
//takes one argument to analyze 
int StrCountDigits(char modString[])
{
    int i = 0;
    int total = 0;
    for(i = 0; i < strlen(modString); ++i)
    {
       // if(modString[i] == ' ')
       if ( isdigit(modString[i]))
       {
           total++;
       }
    }
    return total;
}
