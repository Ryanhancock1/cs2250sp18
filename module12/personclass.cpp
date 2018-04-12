/*
 * =====================================================================================
 *
 *       Filename:  personclass.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:48:33 AM
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


// Function Prototypes

// Main Function
//constructor
Person::Person()
{
     age = 0;
     name = "None";
     weight = 0.0;
    return;
}

// Function Definitions

Person::Person(int a, string n, double w)
{
    age = a;
    name = n;
    weight = w;
    return;
}

void Person::ShowInfo() const
{
    //"this" operator is an alias to the object itself
    cout<<"Name "<<this->name<<endl;
    cout<<"Age "<<this->age<<endl;
    cout<<"Weight "<<this->weight<<endl;

    return ;
    
}

void Person::SetAge(int a)
{
    age = a;
    return;
}
int Person::GetAge()
{
    return age;
}
void Person::SetName(string n)
{
    name = n;
    return;
}
string Person::GetName()
{
    return name;
}
void Person::SetWeight(double w)
{
    weight = w;
    return;
}
double Person::GetWeight()
{
    return weight;
}

Person Person::operator+(Person rhs)
{
    Person tmp;
    //Add elements
    tmp.age = age + rhs.age;
    tmp.name = name + " " + rhs.name;
    tmp.weight = weight + rhs.weight;

    return tmp;
}
