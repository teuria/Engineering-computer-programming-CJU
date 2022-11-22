#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

#define MAX 25
#define NUMBER_OF_BOOKS 3

typedef struct book
{
	char title[MAX];
	char author[MAX];
	int page;
	int price;
}Book;

void print_data(Book* information);
void clearBuffer(void);

int main(void)
{
	Book information[NUMBER_OF_BOOKS];

	printf("Enter information about the book.\n");
	for (int i = 0; i < NUMBER_OF_BOOKS; i++)
	{
		fputs("title : ", stdout);
		fgets(information[i].title, sizeof(information[i].title), stdin);
		fputs("author : ", stdout);
		fgets(information[i].author, sizeof(information[i].author), stdin);
		fputs("page : ", stdout);
		scanf("%d", &information[i].page);
		fputs("price : ", stdout);
		scanf("%d", &information[i].price);
		printf("\n");
		clearBuffer();
	}
	printf("Output information about the book.\n");
	print_data(information);
	return 0;
}

void print_data(Book *information)
{
	for (int i = 0; i < NUMBER_OF_BOOKS; i++)
	{
		printf("title : %s", information[i].title);
		printf("author : %s", information[i].author);
		printf("page : %d\n", information[i].page);
		printf("price : %d\n", information[i].price);
		printf("\n");
	}
}

void clearBuffer(void)
{
	while (getchar() != '\n');
}
