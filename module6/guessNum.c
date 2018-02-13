/*
 * =====================================================================================
 *
 *       Filename:  guessNum.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/13/2018 09:40:01 AM
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
const int LEN = 5;
const int NUM = 20;
// Function Prototypes

// Main Function
int main()
{
    int input[LEN];
    int guess = 0;
    int opp = 0;
    srand((int)time(0));
    guess = rand()%NUM;
    while(opp<LEN)
    {
        printf("Please enter a number between 0 - %d: \n", NUM);
        scanf("%d", &input[opp]);
        if(input[opp] > NUM || input[opp] < 0)
        {
            continue;
        }
        if(input[opp]<guess)
        {
            printf("Go Higher\n");
        }
        else if(input[opp]==guess)
        {
            printf("You Win!!\n");
            break;
        }
        else{
        printf("Go Lower\n");
        }
        opp++;

    }
printf("You Entered \n");
for(int i = 0; i <= opp; i++)
{
    printf("[%d] \n", input[i]);

}

    return 0;
}
// Function Definitions


