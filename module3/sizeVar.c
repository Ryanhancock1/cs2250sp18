/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  Check Variable Size in byte
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:17 AM
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
    int num = 1;
    unsigned int unum = 1;
    num = num * 10000;
    unum = unum * 10000;
    //sizeof - returns the size of variable in bytes
    printf("The sizeof int is [%ld]\n", sizeof(num));
    printf("The sizeof uint is [%ld]\n", sizeof(unum));
    printf("num = [%d] unum=[%d]\n", num, unum);
    printf("num = [%d]\n", num);
    num *= 10000;
    printf("num = [%d]\n", num);
    unum *= 10000;
    printf("unum = [%d]\n", unum);
    // What is the range of an int?
    // 2^32 = i combinations
    // range: -(i/2) to + (i/2 + 1)
    num *= 10000;
    printf("num = [%d]\n", num);
    unum *= 10000;
    printf("unum = [%u]\n", unum);

    return 0;
}
// Function Definitions


