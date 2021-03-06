/*
 * =====================================================================================
 *
 *       Filename:  intlink.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:58:56 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INTLINK__INC__
#define  INTLINK_INC__
//const
typedef struct IntNode_struct 
{
    int dataVal;
    struct IntNode_struct* nextNodePtr;
} IntNode;
//prototype
void IntNode_Create (IntNode* thisNode, int dataInit, IntNode* nextLoc);
void IntNode_InsertAfter (IntNode* thisNode, IntNode* newNode);
void IntNode_PrintNodeData(IntNode* thisNode);
IntNode* IntNode_GetNext(IntNode* thisNode);


#endif /* ----- #ifndef INTLINK__INC__ ----- */

