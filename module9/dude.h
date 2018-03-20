/*
 * =====================================================================================
 *
 *       Filename:  dude.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/20/2018 09:21:08 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  DUDE__INC__
#define  DUDE_INC__
//Constants
struct Dude
{
    int age;
    double weight;
}; //do not forget semi colon
typedef struct SuperDude
{
    int age;
    double weight;
    char sex;
}SuperDude; //do not forget semi colon

// Function Prototypes
void ShowInfo(int age, double weight);
void ShowInfoStruct(SuperDude sd);
#endif /* ----- #ifndef DUDE__INC__ ----- */

