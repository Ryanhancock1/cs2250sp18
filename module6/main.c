/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  02/20/2018 11:30:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Ryan Hancock (), ryanhancock1@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes
void display(int jersey[], int rating[], int n);
// Main Function
int main()
{
    char choice = ' ';
    int jersey[5];
    int rating[5];
    int j=0,r=0;

    for(int i = 0; i<5; i++)
    {
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &j);
        jersey[i] = j;
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &r);
        rating[i]=r;
		printf("\n");
    }
printf("ROSTER\n");
for(int i = 0; i<5; i++)
{
	printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
}
printf("\n");
printf("MENU\n");

		printf("u - Update player rating\n");
		printf("a - Output players above a rating\n");
		printf("r - Replace player\n");
		printf("o - Output roster\n");
		printf("q - Quit\n");
		printf("\n");
		printf("Choose an option:\n");
		scanf(" %c", &choice);

		switch(choice)
		{
			case 'u':
				printf("Enter jersey number:\n");
				scanf("%d", &j);
				printf("Enter a new rating for a player:\n");
				scanf("%d", &r);
				
				break;
			case 'a':
				printf("Enter a rating:\n");
				scanf("%d",&r);
				break;
			case 'r':
				printf("Enter jersey number:\n");
				scanf("%d",&j);
				printf("Enter a new jersey number:\n");
				scanf("%d",&j);
				
				printf("Enter a rating of new player:\n");
				scanf("%d",&r);
				
				break;
			case 'o':
				printf("ROSTER\n");
				for(int i=0;i<5;i++)
				{
					printf("Player %d -- Jersey number: %d, Rating: %d\n",i+1,jersey[i],rating[i]);
				}
				break;
case 'q':
break;
default:
printf("You have enter wrong choice\n");
break;
						}
						
int search(int jersey[], int n)
{
	int i;
	for(i=0;i<5;i++)
	{
		if(jersey[i] == n)
			break;
	}
	return i;
}
    
void display(int jersey[], int rating[], int n)
{
	for(int i = 0; i<5;i++)
	{
		if(rating[i]>= n)
		{
			printf("Player %d -- Jersey number: %d, Rating: %d\n",i+1,jersey[i],rating[i]);
		}
	}
}

    return 0;
}
// Function Definitions


