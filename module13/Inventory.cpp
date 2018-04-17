/*
 * =====================================================================================
 *
 *       Filename:  Inventory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:29:33 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> //for c
#include <iostream> //for c++
#include "Inventory.h"
using namespace std; //for c++

// Constants

// Function Prototypes

// Main Function

// Function Definitions
InventoryItem::InventoryItem(string initName, int initQty) {
    itemName = initName;
    itemQuantity = initQty;

    return;
}

// InventoryItem function to print name/qty attributes
void InventoryItem::PrintItem() {
    cout << "name: " << this->itemName << ", " << "quantity: "
        << this->itemQuantity << endl;

    return;
}

