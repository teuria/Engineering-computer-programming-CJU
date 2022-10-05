#include <stdio.h>
#define STANDARD_AGE 20
#define MINCHESTSIZE_UNDER20 85
#define MAXCHESTSIZE_UNDER20 95
#define MINCHESTSIZE_UP20 90
#define MAXCHESTSIZE_UP20 100

int main(void)
{
	int age = 0;
	int chest = 0;
	char size;

	printf("Entering your age and your chest size : ");
	scanf_s("%d%d", &age, &chest);
	if (age < STANDARD_AGE)
	{
		if (chest < MINCHESTSIZE_UNDER20)
		{
			size = 'S';
		}
		else if ((chest >= MINCHESTSIZE_UNDER20) && (chest < MAXCHESTSIZE_UNDER20))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	else
	{
		if (chest < MINCHESTSIZE_UP20)
		{
			size = 'S';
		}
		else if ((chest >= MINCHESTSIZE_UP20) && (chest < MAXCHESTSIZE_UP20))
		{
			size = 'M';
		}
		else
		{
			size = 'L';
		}
	}
	printf("Your size is :%c", size);
	return 0;
}