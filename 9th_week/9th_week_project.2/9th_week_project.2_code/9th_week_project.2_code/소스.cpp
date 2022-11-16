#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define CHARLENG 5
#define MAXNUM 15

int main(void)
{
	char str1[MAXNUM] = { "\n" };
	char str2[MAXNUM] = { "\n" };
	const char* star = "***************";
	int remain_num = 0;
	int leng = 0;
	printf("Enter a word (MAX : 15) : ");
	scanf("%s", str2);
	leng = strlen(str2);
	if (leng > CHARLENG && leng < MAXNUM)
	{
		remain_num = leng - CHARLENG;
		strncpy(str1, str2, 5);
		strncat(str1, star, remain_num);
		printf("Entered a word : %s, An omitted word : %s ", str2, str1);
	}
	else if (leng > MAXNUM)
	{
		printf("The number of words exceeded 15.");
	}
	else
	{
		strcpy(str1, str2);
		printf("Entered a word : %s, An omitted word : %s ", str2, str1);
	}
	return 0;
}
