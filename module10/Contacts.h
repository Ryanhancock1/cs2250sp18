/*
 * =====================================================================================
 *
 *       Filename:  Contacts.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/07/2018 05:55:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  CONTACTS__INC__
#define  CONTACTS_INC__
struct ContactNode
{
char contactName[50];
char contactPhoneNum[50];
struct ContactNode*nextNodePtr;
};
//creates new node
struct ContactNode* CreateContactNode(struct ContactNode* ptr, char name[], char phone_num[]);

//InsertContactAfter() inserts a new node after node
struct ContactNode* InsertContactAfter(struct ContactNode* ptr,char name[], char phone_num[]);

//GetNextContact() Return location pointed by nextNodePtr
struct ContactNode* GetNextContact(struct ContactNode* ptr);

//PrintContactNode() print nodes
void PrintContactNode(struct ContactNode* ptr);
#endif /* ----- #ifndef CONTACTS__INC__ ----- */

