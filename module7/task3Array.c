/*
 * =====================================================================================
 *
 *       Filename:  task3.c
 *
 *    Description:  update map positions:
 *    x- coordinate
 *    y - coordinate
 *
 *
 *        Version:  1.0
 *        Created:  02/22/2018 09:17:19 AM
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
const int X = 0;
const int Y = 1;
const int dim = 2;
// Function Prototypes
//Initialize points to (0,0)
void PointInit(int* xa, int* ya); //pass by reference
//display current position
void ShowPoint(int x, int y); //pass by value
//Move/Update your point positon
void MovePoint(int x, int y, int* xa, int* ya); //pass xa and ya by reference
// pass x and y by value
// Main Function
int main()
{
   // int point[dim];
    int x = -99, y = -99;
    ShowPoint(x, y);
    PointInit(&x, &y);
    ShowPoint(x, y);
    MovePoint(3,5,&x, &y);
    ShowPoint(x, y);

    return 0;
}
// Function Definitions
//Initialize points to (0,0)
void MovePoint(int newx, int newy, int* xa, int* ya)
{
    *ya= newy;
    *xa= newx;
    return;
}

//Initialize points to (0,0)
void PointInit(int* xa, int* ya)
{
    printf("Begin Init point\n");
    //to update the values at a given address
    //use the de-reference operato "*"
    ShowPoint(*xa, *ya); //give values of xa and ya
    //Update the values
    *ya= 0;
    *xa= 0;
    ShowPoint(*xa, *ya);
    printf("End init point\n");
    return;
}
//display current position
void ShowPoint(int x, int y)
{
    printf("X-position [%d]\n", x);
    printf("Y-position [%d]\n", y);
    return;
}


