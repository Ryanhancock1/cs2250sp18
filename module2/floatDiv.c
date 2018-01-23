/*
 * =====================================================================================
 *
 *       Filename:  floatDiv.c
 *
 *    Description:  Learn about and int Division.
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:24:12 AM
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

// Main Function
int main()
{
    int age = 25;
    int grade = 303;
    double result;
    int iresult;
    //we need to cast the int to double
    result = (double)grade/(double)age;
    printf("result = %lf\n", result);
    iresult = (double)grade/(double)age;
    printf("result = %d\n", iresult);
    //print double as an integer.
    printf("result = %d\n", (int)result);

    return 0;
}
// Function Definitions


