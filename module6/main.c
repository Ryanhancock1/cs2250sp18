/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 11:30:44 PM
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
const int num1 = 5;
// Function Prototypes

// Main Function
int main()
{
    double weight[num1];
    double total= 0;
    double avg, max=0;
    // double  total = 0, avg, max;
    for(int i = 0; i < num1; i++)
    {
        printf("Enter weight %d:\n", i+1);
        scanf("%lf", &weight[i]);
    }
    printf("You entered: ");
    for(int i = 0; i < num1; i++)
    {
        printf("%lf ", weight[i]);
    }
    printf("\n");
    printf("\n");
    for(int i = 0; i < num1; i++)
    {
        total = total + weight[i];
    }
    printf("Total weight: %lf\n", total);
    avg = total / num1;
    printf("Average weight: %lf\n", avg);
    for(int i = 0; i < num1; i++)
    {
        if(weight[i]>max)
        {
            max=weight[i];
        }
    }
    printf("Max weight: %lf\n", max);



    return 0;
}
// Function Definitions


