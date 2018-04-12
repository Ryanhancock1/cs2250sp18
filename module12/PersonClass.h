/*
 * =====================================================================================
 *
 *       Filename:  PersonClass.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 08:42:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  PERSONCLASS__INC__
#define  PERSONCLASS_INC__
// Constants

using namespace std; //for c++
class Person
{
    private:
        int age;
        string name;
        double weight;
    public:
        // Default constructor
        Person();
        //TODO = set parameters as options
        //varried
        //Person(int a = 0, string n = "none", double w = 0.0);
        Person(int a, string n, double w);


        void SetAge(int a); //Setter
        int GetAge(); // getter
        void SetName(string n);
        string GetName();
        void SetWeight(double w);
        double GetWeight();

        void ShowInfo() const; //Constant Getter read only

        Person operator+(Person rhs); //operator + overload
};

#endif /* ----- #ifndef PERSONCLASS__INC__ ----- */

