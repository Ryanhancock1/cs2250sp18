/*
 * =====================================================================================
 *
 *       Filename:  compStrings.c
 *
 *    Description:  Comparing Strings values
 *
 *        Version:  1.0
 *        Created:  02/01/2018 09:05:23 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h> //to compare strings

// Constants

// Function Prototypes

// Main Function
int main()
{
    char word[51];
    char word2[51];
    printf("Enter a word\n");
    scanf("%s", word);
    printf("You entered [%s]\n", word);
// compare string
    if(strcmp(word, "Hello") == 0)
    {
        printf("You entered Hello\n");
    }
    else
    {
        printf("You did not enter Hello\n");
    }
// copy string
    strcpy(word2, word); // word2 = word
    printf("[%s] and [%s]\n", word, word2);

    return 0;
}
// Function Definitions


