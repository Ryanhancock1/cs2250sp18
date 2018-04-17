/*
 * =====================================================================================
 *
 *       Filename:  Inventory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 09:27:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  INVENTORY__INC__
#define  INVENTORY_INC__
#include <iostream>
using namespace std;
class InventoryItem {
    public:
        //constructor
        //only in prototype you have default values not in actual definition
        void PrintItem();
        InventoryItem(string initName = "", int initQty = 0);
    private:
        string itemName;  // Name of item
        int itemQuantity; // Number of items available
};

#endif /* ----- #ifndef INVENTORY__INC__ ----- */

