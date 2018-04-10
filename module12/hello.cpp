/*
 * =====================================================================================
 *
 *       Filename:  hello.cpp
 *
 *    Description:  Hello world in c++
 *
 *        Version:  1.0
 *        Created:  04/10/2018 08:42:02 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//#include <stdio.h> for c
#include <iostream> // for C++
using namespace std; // for c++ standard name

// Constants

// Function Prototypes

// Main Function
int main()
{
    int age;
    string name;
    //std::cout << "Hello World C++" <<std::endl;
    cout << "Hello World C++" <<endl;
    cout<< "How old are you?" <<endl;
    cin>> age;
    cout<< "You are "<< age << " years old"<< endl;
    cout<< "What is your name?" <<endl;
    cin>> name; // takes input up to first space
    // TODO: i need to take care of previous input keys from cin age
    //getline(cin, name); // takes all input including spaces upto enter
    cout<< "You are "<< name << endl;

    return 0;
}
// Function Definitions


