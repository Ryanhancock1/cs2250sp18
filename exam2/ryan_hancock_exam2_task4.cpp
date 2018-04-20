/*
 * =====================================================================================
 *
 *       Filename:  ryan_hancock_exam2_task4.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/19/2018 09:30:47 AM
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

// Function Prototypes
class Angle
{
    private:
        int degrees;
        float minutes;
        string direction;
    public:
        void Setdegrees(int d);
        void Setminutes(float m);
        void Setdirection(string dir);
        int Getdegrees();
        float Getminutes();
        string Getdirection();
};
// Main Function
int main()
{
    int userdegrees;
    float usermin;
    string userdir;
    Angle a1;
    char temp = 'y';
    a1.Setdirection("S");
    a1.Setminutes(34.8);
    a1.Setdegrees(149);
    cout<<"Initial Position: "<<endl;
    while(temp != 'n')
    {
    cout<<"Enter angle"<<endl;
    cout<<"Degrees (0 to 180):"<<endl;
    cin>>userdegrees;
    cout<<"Minutes (0 to 59.9):"<<endl;
    cin>>usermin;
    cout<<"Direction (N, S, E, W):"<<endl;
    cin>>userdir;
    cout<<"You Entered: "<<userdegrees<<"'\xF8"<<usermin<<" "<<userdir<<endl;

    cout<<"Enter another (y/n)"<<endl;
    cin>>temp;
    }

    

    return 0;
}
// Function Definitions
void Angle::Setdegrees(int d)
{degrees = d;
    return;
}
void Angle::Setminutes(float m)
{
    minutes = m;
    return;
}
void Angle::Setdirection(string dir)
{
    direction = dir;
    return;
}
int Angle::Getdegrees()
{
    return degrees;
}
float Angle::Getminutes()
{
    return minutes;
}
string Angle::Getdirection()
{
    return direction;
}


