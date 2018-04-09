/*
 * =====================================================================================
 *
 *       Filename:  Contacts.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 05:50:21 PM
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
#include <string.h>
#include "Contacts.h"

// Function Definitions
//CreateContactNode() creates new node
struct ContactNode* CreateContactNode(struct ContactNode* ptr, char name[], char phone[])
{
if((ptr=(struct ContactNode*)malloc(sizeof(struct ContactNode)))==NULL)
{
printf("Error!! Memory Allocation not allowed!!!");
exit(0);
}
strcpy(ptr->contactName,name); 
strcpy(ptr->contactPhoneNum,phone);
ptr->nextNodePtr=NULL; //initially next pointer point to NULL
return(ptr);
}

//InsertContactAfter() inserts a new node after node
struct ContactNode* InsertContactAfter(struct ContactNode* ptr,char name[], char phone[]) /*insert a new node after node*/
{
struct ContactNode* temp=NULL; //temporary node
//if list is empty then create a new node with name and phone number, and return first node in linked list
if(ptr==NULL)
{
ptr = CreateContactNode(temp,name,phone);
return(ptr);
}
else // if list is not empty then create a new node and link this node to previous node in the linked list
{
    temp = CreateContactNode(temp,name, phone);
ptr->nextNodePtr=temp; //link temp node to the previous(ptr) node in the list
}
return(temp);
}

//GetNextContact() Return location pointed by nextNodePtr
struct ContactNode* GetNextContact(struct ContactNode* ptr)
{
return ptr->nextNodePtr; //Return location pointed by nextNodePtr
}

//PrintContactNode() print nodes
void PrintContactNode(struct ContactNode* ptr)
{
printf("\nName: %s\n",ptr->contactName);
printf("Phone number: %s\n",ptr->contactPhoneNum);
}

