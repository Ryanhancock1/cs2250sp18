/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  creat a 10 digit array with randon numbers between 0-100
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:06:19 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Constants
const int Ran = 10;
// Function Prototypes

// Main Function
int main()
{
    int randArr[Ran];
    srand((int)time(0));
    for(int i = 0; i<Ran; i++)
    {
        randArr[i] = rand()%101;
    }
    for(int i = 0; i<Ran; i++)
    {
        printf("Random Number %d is [%d]\n",i +1, randArr[i]);
    }


    return 0;
}
// Function Definitions


