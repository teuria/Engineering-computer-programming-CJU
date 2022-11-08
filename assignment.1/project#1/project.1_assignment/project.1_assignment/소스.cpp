#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM 100																	//Maximum random number up to 100.
#define MIN_NUM 1																	//Minimum random number at least one.
#define MAX_TRY_NUM 8																//Maximum number of attempts up to 10.
#define MIN_TRY_NUM 3																//The minimum number of attempts is 3.
#define YES 1																		//If want to try again, 1.
#define NO 0																		//If don't want to try again, 0.
#define PERCENT 100																	//Represents the probability as a percentage.

int main(void)
{
	int randnum = 0;																//A random number.
	int chance = 0;																	//Number of attempts.
	int num = 0;																	//The number I entered.
	int play = 1;																	//Whether to do it or not.
	int ch = 0;																		//Whether to play the game or not.
	int answer;																		//Ask if want to try again.
	double rate;																	//probability of success.
	double win = 0;																	//the number of wins.
	double lose = 0;																//Number of defeats.
	int attempt = 0;																//The sum of the number of wins and losses.
	srand(time(0));
	randnum = (rand() % MAX_NUM) + MIN_NUM;											//Specify a random number from 1 to 100
	srand(time(0));
	chance = (rand() % MAX_TRY_NUM) + MIN_TRY_NUM;									//Specify a random number from 3 to 10
	printf("Remaining opportunity : %d\n", chance);
	while (play == 1)
	{
		printf("Select only one number from 1 to 100 : ");
		scanf_s("%d", &num);
		if (num > randnum)
		{
			printf("Down\n");
			ch++;
			if (ch == chance)
			{
				printf("You failed\n");
				lose++;
				printf("You want to try again? (yes = 1 or no = 0): ");
				scanf_s("%d", &answer);
				if (answer == YES)
				{
					ch = 0;
					play = 1;
				}
				else
				{
					printf("You failed");
					break;
				}
			}
			else
				continue;
		}
		else if (num < randnum)
		{
			printf("Up\n");
			ch++;
			if (ch == chance)
			{
				printf("You failed\n");
				lose++;
				printf("Do you want to try again? (yes = 1 or no = 0): ");
				scanf_s("%d", &answer);
				if (answer == YES)
				{
					ch = 0;
					play = 1;
				}
				else
				{
					printf("You failed");
					break;
				}
			}
			else
				continue;
		}
		else if (num == randnum)
		{
			ch++;
			win++;
			attempt = win + lose;
			printf("\nThat's right.\nYour number of attempts is %d\n", attempt);
			play = 0;
		}
	}
	rate = win / (win + lose) * PERCENT;
	printf("Win : %d / Lose : %d\n", (int)win, (int)lose);
	printf("Your winning rate : %.2lf\n", rate);
	return 0;
}