#include <stdio.h>
#define YES 1
#define NO 0
#define NUMBER_OF_PASSWORD 5

void Num(int* PW);

int main(void)
{
	int password[5] = { 5, 8, 9, 1, 6 };
	int retry = 1;
	int answer;
	while (retry == 1)
	{
		Num(password);
		if (password[0] == 5 && password[1] == 8 && password[2] == 9 && password[3] == 1 && password[4] == 6)
		{
			printf("\nNormal termination..\n");
			retry = 0;
		}
		else
		{
			printf("Not matched, retry..\n");
			printf("Do you want to retry?(yes = 1, no = 0) : ");
			scanf_s("%d", &answer);
			if (answer == YES)
			{
				retry = 1;
			}
			else
			{
				printf("\nNot matched..\n");
				break;
			}
		}
	}
	return 0;
}

void Num(int* PW)
{
	int i;
	for (i = 0; i < NUMBER_OF_PASSWORD; i++)
	{
		printf("Enter your password : ");
		scanf_s("%5d", &PW[i]);
	}
}



//#include <stdio.h>
//#define YES 1
//#define NO 0
//#define NUMBER_OF_PASSWORD 5
//
//int main(void)
//{
//	int password[5] = { 5, 8, 9, 1, 6};
//	int i;
//	int retry = 1;
//	int answer;
//	while (retry == 1)	
//	{	
//		for (i = 0; i < NUMBER_OF_PASSWORD; i++)
//		{
//			printf("Enter your password : ");
//			scanf_s("%5d", &password[i]);
//		}
//		if (password[0] == 5 && password[1] == 8 && password[2] == 9 && password[3] == 1 && password[4] == 6)
//		{
//			printf("Normal termination..");
//			retry = 0;
//		}
//		else
//		{
//			printf("Not matched, retry..\n");
//			printf("Do you want to retry?(yes = 1, no = 0) : ");
//			scanf_s("%d", &answer);
//			if (answer == YES)
//			{
//				retry = 1;
//			}
//			else
//			{
//				printf("Not matched");
//				break;
//			}
//		}
//	}
//	return 0;
//}