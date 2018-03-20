/*
 * =====================================================================================
 *
 *       Filename:  funcStr.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/13/2018 09:05:14 AM
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

const int INPUT_STR_SIZE = 50;
// Main Function
int main()
{
    char userStr[INPUT_STR_SIZE];

    printf("Enter String with spaces\n");
    fgets(userStr, INPUT_STR_SIZE, stdin);

    StrSpaceToHyphen(userStr, ':');

    printf("String with hyphens: %s\n", userStr);
   int t =  StrCountDigits(userStr);
   printf("Your input has [%d] digits\n", t);

    return 0;
}



