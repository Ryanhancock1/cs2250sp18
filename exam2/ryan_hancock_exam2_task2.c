/*
 * =====================================================================================
 *
 *       Filename:  ryan_hancock_exam2_task2.c
 *
 *    Description:  Sort 3
 *
 *        Version:  1.0
 *        Created:  04/19/2018 08:58:28 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h> //for c
//#include <iostream> //for c++
//using namespace std; //for c++

// Constants

// Function Prototypes
void sort3 (int *a, int *b, int *c);
// Main Function
int main()
{
    int i1 = 44, i2 = 9, i3 = 130;

    printf("Original order i1[%d], i2[%d]. i3[%d]\n", i1, i2, i3);
    sort3(&i1, &i2, &i3);
    printf("Descending order i1[%d], i2[%d]. i3[%d]\n", i1, i2, i3);
    

    return 0;
}
// Function Definitions
void sort3 (int *a, int *b, int *c)
{
    int temp = 0;
    while(temp == 0)
    {
        if( a< b)
        {
            temp = *a;
            a = b;
            *b = temp;
            temp = 0;
        }
        if(b < c)
        {
            temp = *b;
            b = c;
            *c = temp;
            temp = 0;
            
        }
        else
        {
            temp = 1;
        }
    }

}


