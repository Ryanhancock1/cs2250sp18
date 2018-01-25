/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  learn how to use random numbers.
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:52:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h> // for rand() funtion
#include <time.h>  // for srand(): set your random seat.
// Constants

// Function Prototypes

// Main Function
int main()
{
    //set random seat
    srand((int)time(0));
    printf("Random Number[%d]\n", rand()%100);
    printf("Random Number[%d]\n", rand()%100);
    printf("Random Number[%d]\n", rand()%100);
    printf("Random Number[%d]\n", rand()%100);
    printf("Random Number[%d]\n", rand()%100);

    return 0;
}


// Function Definitions


