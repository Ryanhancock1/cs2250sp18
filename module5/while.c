/*
 * =====================================================================================
 *
 *       Filename:  while.c
 *
 *    Description:  Intro to looping - While loops
 *
 *        Version:  1.0
 *        Created:  02/06/2018 08:50:52 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
//Constant
const int low = 1;
const int max = 40;
// Main Function
int main()
{
    int num = 0;
    unsigned int fact = 1;
    printf("Please enter a number from %d-%d\n", low, max);
    printf("and I will give you the factorial\n");
    scanf("%d", &num);
    if(num>=low && num<=max)
    {
        printf("Calcualting factorial");
        while(num>0)
        {
            printf(" Num = [%d],fact =[%u]\n", num, fact);
            fact = fact * num;
            num --;
        
        }
    }
    else
    {
        printf("You did not follow instruction");
    }
printf("done, your factorial is [%u]", fact);

    return 0;
}
// Function Definitions


