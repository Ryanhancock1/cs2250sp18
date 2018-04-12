/*
 * =====================================================================================
 *
 *       Filename:  TimeHrMn.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/12/2018 09:59:05 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#ifndef  TIMEHRMN__INC__
#define  TIMEHRMN_INC__
using namespace std; //for c++
class TimeHrMn
{
    private:
        int hours;
        int minutes;
    public:
        //Default Constructor
        TimeHrMn();
        //Second Constructor
        TimeHrMn(int h, int m);
        //Getter show Function
        void ShowTime() const;
        //operator +
        TimeHrMn operator+(TimeHrMn rhs);
}

#endif /* ----- #ifndef TIMEHRMN__INC__ ----- */

