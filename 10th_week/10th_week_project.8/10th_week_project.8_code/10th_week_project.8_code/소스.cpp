#include <stdio.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int main(void)
{
	char character[100] = "C:\n\nDocument\n\nGithub\n\nTest1\n\ntest.txt";
	int i = 0;

	char* cut_cha;
	cut_cha = strtok(character, "\n\n");
	cut_cha = strtok(NULL, "\n\n");
	cut_cha = strtok(NULL, "\n\n");
	cut_cha = strtok(NULL, "\n\n");
	cut_cha = strtok(NULL, "\n\n");
	printf("%s", cut_cha);
	return 0;
}
