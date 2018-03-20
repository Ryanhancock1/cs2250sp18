/*
 * =====================================================================================
 *
 *       Filename:  dude.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:21:44 AM
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
// Function Definitions
 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowInfo
 *  Description:  display age using ,cfu
 * =====================================================================================
 */
void ShowInfo(int age,double weight)
{
    printf("Your age is [%d]\n", age);
    printf("Your weight is [%.2lf]\n", weight);

    return;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ShowinfoStruct
 *  Description:  display super dude info
 * =====================================================================================
 */
void ShowInfoStruct(SuperDude sd)
{
    printf("Your age is [%d]\n", sd.age);
    printf("Your weight is [%.2lf]\n",sd.weight);
    printf("Your sex is %c \n", sd.sex);

    return;
}

