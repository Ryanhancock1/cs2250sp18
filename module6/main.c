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
#include <string.h>
// Constants
const int PLAY = 5;

// Function Prototypes
// Main Function
int main()
{
    char choice = ' ';
    int jersey[PLAY];
    int rating[PLAY];
    int num, new;

    for(int i = 0; i<PLAY; i++)
    {
        printf("Enter player %d's jersey number:\n", i+1);
        scanf("%d", &jersey[i]);
        printf("Enter player %d's rating:\n", i+1);
        scanf("%d", &rating[i]);
		printf("\n");
    }
printf("\nROSTER\n");
for(int i = 0; i<PLAY; i++)
{
	printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
}
while(choice != 'q')
{
printf("\nMENU\n");

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
				{
				printf("Enter a jersey number:\n");
				scanf("%d", &num);
				for(int i = 0; i < PLAY; i++)
				{
					if(num == jersey[i])
					{
				printf("Enter a new rating for a player:\n");
				scanf("%d", &rating[i]);
					}
				}
				}
				break;
			case 'a':
				{
				printf("Enter a rating:\n");
				scanf("%d",&num);
				printf("\nABOVE %d\n", num);
				for(int i = 0; i< PLAY; i++)
				{
					if(num < rating[i])
					{
	printf("Player %d -- Jersey number: %d, Rating: %d\n", i+1, jersey[i], rating[i]);
					}
				}
				}
				break;
			case 'r':
				{
				printf("Enter a jersey number:\n");
				scanf("%d",&num);
				printf("Enter a new jersey number:\n");
				scanf("%d",&new);
				for(int i = 0; i<PLAY; i++)
				{
					if(num == jersey[i])
					{
						jersey[i] = new;
				printf("Enter a rating for the player:\n");
				scanf("%d",&rating[i]);
					}
				}
		}
				
				break;
			case 'o':
				{
				printf("\nROSTER\n");
				for(int i=0;i<PLAY;i++)
				{
					printf("Player %d -- Jersey number: %d, Rating: %d\n",i+1,jersey[i],rating[i]);
				}
				}
				break;
case 'q':
break;
						}
}

}
// Function Definitions


