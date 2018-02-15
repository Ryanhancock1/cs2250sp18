/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/14/2018 11:05:17 PM
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
    int arrowBaseHeight = 0;
    int arrowBaseWidth = 0;
    int arrowHeadWidth = 0;
    printf("Enter arrow base height:\n");
    scanf("%d",&arrowBaseHeight);

    printf("Enter arrow base width:\n");
    scanf("%d",&arrowBaseWidth);

    while(arrowHeadWidth <= arrowBaseWidth){
        printf("Enter arrow head width:\n");
        scanf("%d",&arrowHeadWidth);}
    for(int i = 0; i<arrowBaseHeight; i++)
    {
        for(int j = 0;j<arrowBaseWidth; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = arrowHeadWidth; i>0; i--)
    {
        for(int j=i; j>0; j--)
        {
            printf("*");
        }
        printf("\n");
    }



    return 0;
}
// Function Definitions


