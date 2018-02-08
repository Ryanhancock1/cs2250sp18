/*
 * =====================================================================================
 *
 *       Filename:  task4.c
 *
 *    Description:  print first 20 even numbers
 *
 *        Version:  1.0
 *        Created:  02/08/2018 09:08:58 AM
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
{//print first 20 even numbers
    int x = 0;
    int counter = 0;
    while(1)
    {
        //print even numbers
        //skip odd
        //when 20 end
        if((x % 2) == 0){ 
    printf("Evern NUmber [%d] ", x);}
        else
        {
            printf("\tSkip odd number[%d]\n", x);
            x++;
            continue;
        }
    x++;
    counter++;
    
    if(counter == 20)
    {
        break;
    
    }
    }

    return 0;
}
// Function Definitions


