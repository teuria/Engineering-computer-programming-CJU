#include <stdio.h>
int main()
{
	int Num;
	int i;
	int pn;
	int j;
	int cnt = 0;
	printf("Enter an integer greater than or equal to 2 : ");
	scanf_s("%d", &Num);
	for (i = 2; i <= Num; i++)
	{
		pn = 1;
		for (j = 2; j < i; j++)
		{
			if ((i % j) == 0)
			{
				pn = 0;
				break;
			}
		}
		if (pn == 1)
		{
			printf("%5d", i);
			cnt++;
			if ((cnt % 5) == 0)
			{
				printf("\n");
			}
		}
	}
	return 0;
}