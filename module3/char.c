/*
 * =====================================================================================
 *
 *       Filename:  char.c
 *
 *    Description:  practice characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:33 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars 
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char input, dummy;
    int age;
    printf("Do you like to code?:\n");
    scanf("%c", &input);

    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is %d\n", age);
    printf("1)You entered [%c]\n", input);
    printf("Do you really like to code?:\n");
    //Use an empty space before %c this will take care of previous enter
    scanf("%c %c", &dummy, &input);
    printf("2)You entered [%c]\n", input);
    printf("3)You entered [%c]\n", input);
    


    return 0;
}
// Function Definitions


