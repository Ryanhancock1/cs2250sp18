/*
 * =====================================================================================
 *
 *       Filename:  ryan_hancock_exam1_task2.c
 *
 *    Description:  task2
 *
 *        Version:  1.0
 *        Created:  03/01/2018 08:55:44 AM
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
int grades(int num);
// Main Function
int main()
{
    int num;
    //How many grades?
    printf("How many grades would you like to calculate?\n");
    scanf("%d", &num);
    printf("Number of failures = %d\n", grades(num));

    return 0;
}
// Function Definitions
// function for grading
int grades(int num)
{
    int grade[num];
    float total = 0;
    int failures = 0;
    for(int i = 0; i<num; i++)
    {
        printf("Enter grade #%d\n", i+1);
        scanf("%d", &grade[i]);
        if(grade[i]<65)
        {
            failures++;
        }

    }
    printf("\n");
    for(int i = 0; i<num; i++)
    {
        total = total + grade[i];
    }
    printf("Grade average = %.2f\n\n", total / num);
    return failures;
}


