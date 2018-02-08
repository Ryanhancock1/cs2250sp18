/*
 * =====================================================================================
 *
 *       Filename:  reversefor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:56:10 AM
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
    char name[] = "Waldo Weber";
    printf("Hi [%s] you are [%lu] bytes long\n", name, sizeof(name));
// task 1 print 1 char at a time
for(int c = 0; c<sizeof(name);c++)
{
    printf("[%c]\n", name[c]);
}
// print name in revere order
// ToDO next week
    for(int i = 10; i > 0; i--)
    {
        printf("i [%d]\n", i);
    }

    return 0;
}
// Function Definitions


