/*
 * =====================================================================================
 *
 *       Filename:  ryan_hancock_exam1_task1.c
 *
 *    Description:  task1
 *
 *        Version:  1.0
 *        Created:  03/01/2018 08:24:56 AM
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
int howmuch(float money);
// Main Function
int main()
{
    float money;
    //ask how much money
    printf("How much money would you like to earn?\n");
    scanf("%f", &money);
    howmuch(money);

    return 0;
}
// Function Definitions
// fuction for tv:
int howmuch(float money)
{
    if(money <= 5000)
    {
        //for tv
        printf("With this amount of money %.2f you can buy a TV\n", money);
    }
    else if(money>5000 && money<=10000)
    {
        //for RTV
        printf("With this amount of money %.2f you can buy a RTV\n", money);
    }
    else if(money>10000 && money<=50000)
    {
        //for car
        printf("With this amount of money %.2f you can buy a Car\n", money);
    }
    else if(money>50000)
    {
        //for small house
        printf("With this amount of money %.2f you can buy a small house\n", money);
    }

    return 0;
}


