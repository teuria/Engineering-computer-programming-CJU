//#include <stdio.h>
//int main(void)
//{
//	int i;
//	int j;
//	for (i = 2; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%d * %d = %d\n", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
	int i = 0;
	int j;
	printf("Enter the number of multiplication tables you want to get : ");
	scanf_s("%d", &i);
	for (j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
	return 0;
}