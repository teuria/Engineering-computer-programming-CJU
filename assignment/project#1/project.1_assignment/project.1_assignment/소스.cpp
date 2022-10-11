#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXNUM 99
#define MAXTRYNUM 7
#define MINTRYNUM 3
#define YES 1
#define NO 0
#define PERCENT 100

int main(void)
{
	int randnum = 0;
	int chance = 0;
	int num = 0;
	int play = 1;
	int ch = 0;	
	int result;
	int answer;
	double rate;
	double win = 0;
	double lose = 0;
	srand(time(0));
	randnum = (rand() % MAXNUM) + 1;
	srand(time(0));
	chance = (rand() % MAXTRYNUM) + MINTRYNUM;
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
				printf("You failed");
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
		else if (num == randnum)
		{
			ch++;
			win++;
			printf("That's right.\n Your number of attempts is %d\n", win + lose);
			play = 0;
		}
	}
	rate = win / (win + lose) * PERCENT;
	printf("Your winning rate : %.2lf", rate);
	return 0;
}