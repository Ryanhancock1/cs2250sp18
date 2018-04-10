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
using namespace std; //for c++

// Constants
class Person
{
    private:
        int age;
        string name;
        double weight;
    public:
        void SetAge(int a);
        int GetAge();
        void SetName(string n);
        string GetName();
        void SetWeight(double w);
        double GetWeight();
};

// Function Prototypes

// Main Function
int main()
{
    Person p1;
    p1.SetAge(21);
    p1.SetName("Ryan");
    p1.SetWeight(200.0);
    cout<<"Name "<<p1.GetName()<<endl;
    cout<<"Age "<<p1.GetAge()<<endl;
    cout<<"Weight "<<p1.GetWeight()<<endl;
    

    return 0;
}
// Function Definitions

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

