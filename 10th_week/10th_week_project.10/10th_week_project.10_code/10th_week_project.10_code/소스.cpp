#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	FILE* fp;
	int integer = 10;
	double real_number = 0.5;
	char character = 'a';
	char string[10] = "apple";

	fp = fopen("test.text", "r");
	if (fp == NULL)
	{
		printf("Failed to open input file.\n");
		return 1;
	}
	printf("integer : %d, real_number : %.1lf, character : %c, string : %s\n", integer, real_number, character, string);
	fclose(fp);
	return 0;
}
