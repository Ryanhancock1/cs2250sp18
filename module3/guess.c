/*
 * =====================================================================================
 *
 *       Filename:  guess.c
 *
 *    Description:  Guess a number from 0-9 and win a prize
 *
 *        Version:  1.0
 *        Created:  01/25/2018 10:07:47 AM
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

// Function Prototypes

// Main Function
int main()
{
    int input;
    int guess;
    
    printf("Please guess a number from 0-9\n");
    scanf("%d", &input);
    srand((int)time(0));
    guess = rand()%10; // get your random number
    printf("You entered [%d] and guess was [%d]\n", input, guess);


    return 0;
}
// Function Definitions


