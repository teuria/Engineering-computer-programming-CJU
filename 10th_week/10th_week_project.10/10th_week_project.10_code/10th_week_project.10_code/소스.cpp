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
	for (int i =0; i<4; i++)
	{
		fscanf(fp, "%d %.1lf %c %s", &integer, &real_number, character, string);
	}
	printf("integer : %d\n", integer);
	printf("real_number : %.1lf\n", real_number);
	printf("character : %c\n", character);
	printf("string : %s\n", string);
	fclose(fp);
	return 0;
}
