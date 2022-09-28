#include <stdio.h>
#define MINCHESTSIZE 90
#define MAXCHSETSIZE 100

int main(void)
{
	int chest = 0;
	char size;
	printf("Entering your chest size :");
	scanf_s("%d", &chest);

	if (chest <= MINCHESTSIZE)
	{
		size = 'S';
	}
	else if ((MINCHESTSIZE < chest) && (chest <= MAXCHSETSIZE))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}
	printf("Your chest size is :%c", size);
	return 0;
}