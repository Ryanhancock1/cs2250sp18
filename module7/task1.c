/*
 * =====================================================================================
 *
 *       Filename:  task1.c
 *
 *    Description:  Take 2 numbers from users define the following functions
 *    1) TheSum: returns sums of two number
 *    2) the products
 *
 *
 *
 *        Version:  1.0
 *        Created:  02/20/2018 09:32:06 AM
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
char Menu(void);
int TheSum(double n1, double n2);
double TheProduct(double n1, double n2);
// Main Function
int main()
{
    double n1, n2;
    char input;

    
    printf("Enter two integers\n");
    scanf("%lf", &n1);
    scanf("%lf", &n2);

    input = Menu();
    switch(input){
case 's':
    printf("Sum is %d\n", TheSum(n1, n2));
    break;
case 'p':
    printf("Product is %lf\n", TheProduct(n1, n2));
    break;
    default:
    printf("invalid choice\n");
    }
    return 0;
}
// Function Definitions
char Menu(void)
{
    char in = 'n';
    printf("Would you like the sum or product?\n");
    printf("\t s) TheSum\n");
    printf("\t p) TheProduct\n");
    scanf(" %c", &in);
    return in;
}

int TheSum(double n1, double n2)
{
// return int of sum
    return (int)(n1 + n2);
}
double TheProduct(double n1, double n2)
{

    return n1 * n2;
}

