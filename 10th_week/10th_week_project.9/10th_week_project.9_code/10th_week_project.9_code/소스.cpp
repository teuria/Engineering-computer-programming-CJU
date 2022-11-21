#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char character[100] = "C:\\Document\\Github\\Test1\\test.txt";
	char cut[100] = "\\";
	char* Backslash = cut;

	char* cut_cha1;
	cut_cha1 = strtok(character, cut);

	char* cut_cha2;
	cut_cha2 = strtok(NULL, cut);

	char* cut_cha3;
	cut_cha3 = strtok(NULL, cut);

	char* cut_cha4;
	cut_cha4 = strtok(NULL, cut);

	char* cut_cha5;
	cut_cha5 = strtok(NULL, cut);

	strcpy(cut_cha4, "test2");

	strcat(Backslash, cut_cha2);
	strcat(cut_cha1, Backslash);

	Backslash = strtok(Backslash, "D");
	strcat(Backslash, cut_cha3);
	strcat(cut_cha1, Backslash);

	Backslash = strtok(Backslash, "G");
	strcat(Backslash, cut_cha4);
	strcat(cut_cha1, Backslash);

	Backslash = strtok(Backslash, "t");
	strcat(Backslash, cut_cha5);
	strcat(cut_cha1, Backslash);

	printf("%s\n", cut_cha1);
	return 0;
}