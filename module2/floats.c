/*
 * =====================================================================================
 *
 *       Filename:  floats.c
 *
 *    Description:   Learning about floating point.
 *
 *        Version:  1.0
 *        Created:  01/18/2018 08:53:14 AM
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
    const double gravity = 9.8; // m/s^2
    const double LB_TO_KG = 0.453592;
// Function Prototypes

// Main Function
int main()
{
    double weight = 2.4;
    printf("My w is %lf\n", weight);
    printf("Please enter your weight in lb\n");
    scanf("%lf", &weight);
    printf("My w is %lf\n", weight);
    // Gravity cant change since constant!
    printf("My weight in kg is %lf\n", weight * LB_TO_KG);
    printf("Real weight in kg is %lf\n", weight * gravity * LB_TO_KG);

    return 0;
}
// Function Definitions


