/*
 * =====================================================================================
 *
 *       Filename:  helloclass.cpp
 *
 *    Description:  Hello world class
 *
 *        Version:  1.0
 *        Created:  04/10/2018 09:11:56 AM
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
class HelloNum
{
    // only the developer can see this section
    private:
        int number; //attribute

    //user has access here by writing functions or methods in c++
    public:
        void SetNumber(int n); // Setter
        int GetNumber();
        void ShowNumber(); //prototype

};
// Function Prototypes

// Main Function
int main()
{
    int num;
    //instance of the class HelloNum
    HelloNum n1; // and object
    n1.SetNumber(91);
    n1.ShowNumber();
    //cout<<"Number is "<<n1.GetNumber()<<endl;
    num = n1.GetNumber();
    cout<<"Num is "<< num << endl:

    return 0;
}
// Function Definitions
void HelloNum::ShowNumber()
{
    cout<< "your num is " << number << endl;
    return;
}
void HelloNum::SetNumber(int n)
{
    //Set private member
    number = n;
    return;

}
int HelloNum::GetNumber()
{
    //return private member
    return number;
}

