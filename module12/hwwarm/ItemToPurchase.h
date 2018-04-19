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
#include <string>
using namespace std;

class ItemToPurchase
{
    public:
    ItemToPurchase();
    ItemToPurchase(string name, string description, int price, int quantity = 1);
    void SetName(string name);
    string GetName();

    void SetPrice(int itemPrice);
    int GetPrice();

    void SetQuantity(int itemQuantity);
    int GetQuantity();
          
    void SetDescription(string description);
    string GetDescription();

    void PrintItemCost();
    void PrintItemDescription();

    private:
    string itemName;
    string itemDescription;
    int itemPrice;
    int itemQuantity;
};

#endif /* ----- #ifndef ITEMTOPURCHASE__INC__ ----- */

