/*
 * =====================================================================================
 *
 *       Filename:  ShoppingCart.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 10:56:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  SHOPPINGCART__INC__
#define  SHOPPINGCART_INC__
#include <string>
#include <vector>
using namespace std;

#include "ItemToPurchase.h"

class ShoppingCart 
{
    public:
        ShoppingCart();
        ShoppingCart(string name, string date);

        string GetCustomerName();
        string GetDate();

        void AddItem(ItemToPurchase item);
        void RemoveItem(string name);

        void ModifyItem(ItemToPurchase item);

        int GetNumItemsInCart();
        double GetCostOfCart();

        void PrintTotal();
        void PrintDescriptions();


    private:
        string customerName;
        string currentDate;
        vector<ItemToPurchase> cartItems;
};


#endif /* ----- #ifndef SHOPPINGCART__INC__ ----- */

