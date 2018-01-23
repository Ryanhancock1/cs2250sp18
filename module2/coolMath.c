/*
 * =====================================================================================
 *
 *       Filename:  coolMath.c
 *
 *    Description:  use math library
 *
 *        Version:  1.0
 *        Created:  01/18/2018 09:39:49 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <math.h>// sqrt(), pow(), fabs()
// Constants

// Function Prototypes

// Main Function
int main()
{
    //Caclulate sides of triangle
    double sideA = 4.0;
    double sideB = 5.0;
    double sideC;
    sideC = sqrt((sideA * sideA) + (sideB * sideB));
    printf("sideA %lf, sideB %lf, sideC %lf\n", sideA, sideB, sideC);
//use base power
    sideC = sqrt(pow(sideA, 2) + pow(sideB, 2));
    printf("sideA %lf, sideB %lf, sideC %lf\n", sideA, sideB, sideC);
    double a = -99.0;
    printf("The abs of %lf is %lf\n", a, fabs(a));
    return 0;
}
// Function Definitions


