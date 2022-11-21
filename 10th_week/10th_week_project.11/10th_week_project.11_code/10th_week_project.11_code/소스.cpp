#include <stdio.h>

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#define MAX 100

int main(void)
{
	FILE* fp1, *fp2;
	char str[MAX];
	char num[MAX];
	fp1 = fopen("yolo_label_data.txt", "r");
	if (fp1 == NULL)
	{
		printf("The file was not opened.");
		return 1;
	}
	fp2 = fopen("yolo_bbox_data.txt", "r");
	if (fp2 == NULL)
	{
		printf("The file was not opened.");
		return 1;
	}

	while (1)
	{
		if (fgets(num, MAX, fp2) != NULL)
		{
			printf("%s", num);
		}
		else
		{
			break;
		}
	}
	printf("\n");
	while (feof(fp1) == 0)
	{
		fgets(str, MAX, fp1);
		printf("%s", str);
	}	
	fclose(fp1);
	fclose(fp2);
	return 0;
}