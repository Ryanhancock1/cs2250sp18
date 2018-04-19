/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 10:24:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  ITEMTOPURCHASE__INC__
#define  ITEMTOPURCHASE_INC__
#include <iostream>
using namespace std;

class ItemToPurchase
{
    public:
    ItemToPurchase();
    void SetName(string name);
    string GetName();

    void SetPrice(int itemPrice);
    int GetPrice();

    void SetQuantity(int itemQuantity);
    int GetQuantity();

    private:
    string itemName;
    int itemPrice;
    int itemQuantity;
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

