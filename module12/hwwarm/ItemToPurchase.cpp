/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2018 10:25:06 PM
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
using namespace std; //for c++
#include "ItemToPurchase.h"
// Function Definitions
ItemToPurchase::ItemToPurchase(){
    itemName="none";
    itemPrice=0;
    itemQuantity=0;
    return;
}
void ItemToPurchase::SetName(string name){
    itemName=name;
    return;
}
string ItemToPurchase::GetName(){
    return itemName;
}

void ItemToPurchase::SetPrice(int price){
    itemPrice=price;
    return;
}
int ItemToPurchase::GetPrice(){
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int quantity){
    itemQuantity=quantity;
}
int ItemToPurchase::GetQuantity(){
    return itemQuantity;
}


