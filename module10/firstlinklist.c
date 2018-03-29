/*
 * =====================================================================================
 *
 *       Filename:  firstlinklist.c
 *
 *    Description:  Link List first
 *
 *        Version:  1.0
 *        Created:  03/29/2018 09:25:50 AM
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
#include "intlink.h"


int main(void) 
{
    //bookKeeping purpose
    IntNode* headObj  = NULL; // Create intNode objects
    IntNode* nodeObj1 = NULL;
    //actual nodes
    IntNode* nodeObj2 = NULL;
    IntNode* nodeObj3 = NULL;
    IntNode* currObj  = NULL;

    // Front of nodes list
    headObj = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(headObj, -1, NULL);

    // Insert nodes
    nodeObj1 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj1, 555, NULL);
    IntNode_InsertAfter(headObj, nodeObj1);

    nodeObj2 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj2, 999, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj2);

    nodeObj3 = (IntNode*)malloc(sizeof(IntNode));
    IntNode_Create(nodeObj3, 777, NULL);
    IntNode_InsertAfter(nodeObj1, nodeObj3);

    // Print linked list
    currObj = headObj;
    while (currObj != NULL) {
        IntNode_PrintNodeData(currObj);
        currObj = IntNode_GetNext(currObj);
    }
    //clean mess
    free(headObj);
    free(nodeObj1);
    free(nodeObj2);
    free(nodeObj3);

    return 0;
}// Main Function

// Function Definitions


