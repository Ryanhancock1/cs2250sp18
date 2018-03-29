/*
 * =====================================================================================
 *
 *       Filename:  mymalloc.c
 *
 *    Description:  Dynaimically allocate memory
 *
 *        Version:  1.0
 *        Created:  03/29/2018 08:41:14 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    int num;
    int* sa = NULL;
    printf("How may numbers do you need?\n");
    scanf("%d", &num);
    //lu for long unsigned
    printf("int is %lu bytes\n", sizeof(int) );
    printf("int array of %d is %lu bytes\n", num, num *sizeof(int));
    //malloc take number of bites
    //cast address to pointer type(*<type>)
    sa = (int*)malloc(num * sizeof(int));
    //init array
    for(int i = 0; i < num; i++)
    {
        sa[i] = i + 10;
    }
    //display array
    for(int i = 0; i < num; i++)
    {
        printf("%d element is %d \n", i, sa[i]);
    }

    free(sa);
    return 0;
}
// Function Definitions


