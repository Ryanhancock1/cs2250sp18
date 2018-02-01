/*
 * =====================================================================================
 *
 *       Filename:  logicalcomp.c
 *
 *    Description:  grades
 *
 *        Version:  1.0
 *        Created:  02/01/2018 08:35:57 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
// Constants

// Function Prototypes

// Main Function
int main()
{
    int grade;
    bool success = true;
    printf("What is your grade\n");
    scanf("%d", &grade);
    // get grade
    // if 100 <= 90 then A
    if(grade>=90 && grade<=100)
    {
        printf("Grade is an A\n");
    }
    // if 89 <= 80 then B
    else if(grade>=80 && grade<90)
    {
        printf("Grade is an B\n");
    }
    else if(grade>=70 && grade<80)
    {
        printf("Grade is a C\n");
    }
    // if 79<= 70 then C
    else
    {
        printf("Grade is a E\n");
        success = false;
    }
    // if 70< value then E
    if(success)
    {
        printf("Congrats\n");
    }
    else
    {
        printf("See you next Semester\n");
    }

    return 0;
}
// Function Definitions


