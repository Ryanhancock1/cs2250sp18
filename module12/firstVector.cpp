/*
 * =====================================================================================
 *
 *       Filename:  firstVector.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/2018 08:41:30 AM
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
#include <vector>
using namespace std; //for c++

// Constants

// Function Prototypes

// Main Function
int main()
{
    vector <int> g1;
    vector <int> :: iterator j; //an iterator for vectors

    // add elements
    for(int i = 1; i < 5; i++)
    {
        g1.push_back(i*2); // push_back() adds element to end of vector
    }
    cout<<"Output of begin and end\n";
    // use iterator to loop elements
    for( j = g1.begin(); j != g1.end(); j++)
    {
        //Dereference the iterator to the value
        cout<< *j << '\t';
    }
    cout<<endl;
    //To add and interate
    //push_back(): add element at end of vector
    //begin(): takes the first element of the vector
    //end(): takes last element of vector
    //capacity
    //size() : returns size of vector
    //max_size: return max number of elements that the vector can hold
    //capacity(): return the size of storage(bytes)
    //empty(): Returns wheter the container is empty
    cout<<"Size: "<<g1.size()<<endl;
    cout<<"capacity: "<<g1.capacity()<<endl;
    cout <<"Max_size: "<<g1.max_size()<<endl;
    //Accessing the elements
    //1) reference operator [g]; Returns a reference to the element at position 'g'
    //2) at(g) : returns a reference to element at position 'g'
    //3) front() : Returns a reference to the first element
    //4) back(): Returns a reference to last element
    cout<< "Reference Operator [g]: g1[2] = "<<g1[2] << endl;
    cout << "at : g1.at(1) = " << g1.at(1) << endl;
    cout << "front () g1.front() = "<<g1.front() << endl;
    cout << "back() : g1.back() = "<< g1.back()<< endl;

    return 0;
}
// Function Definitions


