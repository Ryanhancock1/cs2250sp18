/*
 * =====================================================================================
 *
 *       Filename:  testPersonClass.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:43:21 AM
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
#include "PersonClass.h"
using namespace std; //for c++


// Constants

// Function Prototypes

// Main Function
int main()
{
    /*
    Person p1;
    p1.SetAge(21);
    p1.SetName("Ryan");
    p1.SetWeight(200.0);
    cout<<"Name "<<p1.GetName()<<endl;
    cout<<"Age "<<p1.GetAge()<<endl;
    cout<<"Weight "<<p1.GetWeight()<<endl;
    */
    Person p2;
    p2.ShowInfo();

    Person p3(4,"waldo", 23.5);
    p3.ShowInfo();

    Person p4(4,"luigi", 300.0);
    p4.ShowInfo();
    //task define an array of 4 people set values to defaults
    //Display all members of the array
    /*
    int size = 4;
    Person persons[size];
    for(int i = 0; i<size; i++)
    {
        cout << i << " ";
        persons[i].ShowInfo();
        cout<< endl;
    }
    */
    //task 2; enable person + person operation
    p2 = p3 + p4;
    p2.ShowInfo();

    return 0;
}
// Function Definitions


