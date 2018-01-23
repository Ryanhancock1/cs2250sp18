/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Body Mass Index
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:28:44 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>

// Constants

// Function Prototypes

// Main Function
int main()
{ //capture weight
    double bmi;
    double height;
    double weight;
    printf("Please enter weight in kg.\n");
    scanf("%lf", &weight);
    printf("Please enter height in m.\n");
    scanf("%lf", &height);
    bmi = weight / pow(height, 2);
    printf("Your Body Mass Index is %lf\n", bmi);
    return 0;
}
// Function Definitions


