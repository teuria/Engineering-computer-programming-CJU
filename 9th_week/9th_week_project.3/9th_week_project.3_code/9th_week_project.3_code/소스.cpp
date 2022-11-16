#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define COUNTWORD 3
#define MAXLENG 80

int main(void)
{
	char str1[MAXLENG] = { "\n" }, str2[MAXLENG] = { "\n" }, str3[MAXLENG] = { "\n" };
	char temp[MAXLENG];
	printf("Enter 3 words : ");
	scanf("%s %s %s", str1, str2, str3);

	if (strcmp(str1, str2) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str2);
		strcpy(str2, temp);
	}
	if (strcmp(str1, str3) > 0)
	{
		strcpy(temp, str1);
		strcpy(str1, str3);
		strcpy(str3, temp);
	}
	if (strcmp(str2, str3) > 0)
	{
		strcpy(temp, str2);
		strcpy(str2, str3);
		strcpy(str3, temp);
	}
	printf("%s, %s, %s", str1, str2, str3);
	return 0;
}
