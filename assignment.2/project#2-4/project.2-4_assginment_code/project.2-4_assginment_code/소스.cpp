#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMBER_OF_RANDNUM_NUMBERS 5
#define MAX_NUMBER 99
#define ASCENDING 1
#define DESCENDING 2

void pick_the_random_number(int *randnum);

int main(void)
{
	srand(time(NULL));
	int random_number[NUMBER_OF_RANDNUM_NUMBERS];
	pick_the_random_number(random_number);
	int i;
	int select;
	for (i = 0; i < NUMBER_OF_RANDNUM_NUMBERS; i++)
	{
		printf("%d ", random_number[i]);
	}
	printf("\nSelect a method. (ascending = 1, descending = 2) : ");
	scanf_s("%d", &select);
	if (select == ASCENDING)
	{
		int i, j, Num = 0;
		for (i = 0; i < NUMBER_OF_RANDNUM_NUMBERS; i++) 
		{
			for (j = i; j < NUMBER_OF_RANDNUM_NUMBERS; j++) 
			{
				if (random_number[i] > random_number[j])
		        {
					Num = random_number[i];
					random_number[i] = random_number[j];
					random_number[j] = Num;
		        }
		    }
		}
	}
	else
	{
		int i, j, Num = 0;
		for (i = 0; i < NUMBER_OF_RANDNUM_NUMBERS; i++) 
		{
			for (j = i; j < NUMBER_OF_RANDNUM_NUMBERS; j++) 
			{
				if (random_number[i] < random_number[j])
				{
					Num = random_number[i];
					random_number[i] = random_number[j];
					random_number[j] = Num;
				}
			}
		}
	}
	for (i = 0; i < NUMBER_OF_RANDNUM_NUMBERS; i++)
	{
		printf("%d ", random_number[i]);
	}
	return 0;
}

void pick_the_random_number(int *randnum)
{
	int i;
	for (i = 0; i < NUMBER_OF_RANDNUM_NUMBERS; i++)
	{
		randnum[i] = (rand() % MAX_NUMBER) + 1;
	}
}

