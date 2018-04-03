/*
 * =====================================================================================
 *
 *       Filename:  infile.c
 *
 *    Description:  Read date from files
 *
 *        Version:  1.0
 *        Created:  04/03/2018 09:17:32 AM
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

//Constant
#define NUM 4
//same as Const int NUM = 4;

// Main Function
int main()
{
    //int data[NUM]; //Static memory
    int* userNums; //User Nums; dynamic memory
    FILE* inFile = NULL;
    int arrSize = 0; //USer specified number of int
    printf("Opening file data.txt\n");
    //open file for reading purpose
    inFile = fopen("data.txt", "r");
    // test for success
    if(inFile == NULL)
    {
        printf("Could not open file\n");
        return -1;
    }
    //Scan File
    fscanf(inFile, "%d", &arrSize);
    printf("arrSize[%d]\n", arrSize);
    //allocate memory
    userNums = (int*)malloc(sizeof(int)*arrSize);
    //check yuo got your memory
    if(userNums == NULL)
    {
        printf("UNable to malloc mem\n");
        fclose(inFile);
        return -2;
    }
    int i = 0; //
    while(i<= arrSize)
    {
        fscanf(inFile, "%d", &(userNums[i]));
        i = i + 1;
    }
    //print records
    i = 0;
    while(i< arrSize)
    {
    
    printf("Number [%d] \n", userNums[i]);
    i++;
    }
    //close
    fclose(inFile);
    free(userNums);

    return 0;
}
// Function Definitions


