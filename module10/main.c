/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 05:15:25 PM
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
#include "Contacts.h"
// Main Function
int main()
{
struct ContactNode*root;
struct ContactNode*temp;
int i;
// name & phone
char nm[50],phnum[50];
for(i = 1; i<=3;i++)
{
    printf("\nPerson%d\n",i);
    printf("Enter name:\n");
    scanf(" %s", nm);
    printf("Enter phone number:\n");
    scanf(" %s", phnum);
    if(i==1)
    {
        root = CreateContactNode(temp,nm,phnum);
        temp = root;
    }
    else
    {
        temp = InsertContactAfter(temp,nm,phnum);
        printf("You entered: %s, %s\n", temp->contactName, temp->contactPhoneNum);
    }
}
    printf("\nCONTACT LIST");
    temp=root;   
//print list by traversing each node from root to end of list
while(temp)
{
	PrintContactNode(temp);
	temp=GetNextContact(temp); //replacing temp value to next node
}
return 0;
}

// Function Definitions


