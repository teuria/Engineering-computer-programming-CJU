#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num;		//Enter to Number
	int* pn;		//prime number
	int i, j;

	printf("> Enter a positive number : ");
	scanf_s("%d", &num);
	pn = (int *)malloc((num - 1) * sizeof(int));
	if (pn == NULL)			
	{
		printf("Out of memory.");
		exit(1);
	}
	for (i = 0; i < (num - 1); i++)
	{
		pn[i] = i + 2;
	}
	i = 0;
	while (1)
	{
		while ((pn[i] == 0) && (i < (num - 2)))
		{
			i++;
		}
		if (i == (num - 2)) break;
		for (j = i + 1; j < (num - 1); j++)
		{
			if ((pn[j] % pn[i]) == 0)
			{
				pn[j] = 0;
			}
		}
		i++;
	}
	for (i = 0; i < (num - 2); i++)
	{
		if (pn[i] != 0)
		{
			printf("%5d", pn[i]);
		}
		else
		{
			printf("%5c", 'X');
		}

		if ((i + 1) % 5 == 0)
		{
			printf("\n");
		}
	}
	free(pn);
	return 0;
}