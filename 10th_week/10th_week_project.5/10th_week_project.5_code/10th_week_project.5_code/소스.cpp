#include <stdio.h>
#include <stdlib.h>

#define NUMBER_OF_TRAIN_COMPARTMENTS 5

typedef struct train Train;

struct train
{
	int seats;
	Train* next;
};

int main(void)
{
	Train* head = NULL, * tail = NULL;
	int i;
	for (i = 0; i < NUMBER_OF_TRAIN_COMPARTMENTS; i++)
	{
		if (head == NULL)
		{
			head = tail = (Train*)malloc(sizeof(Train));
		}
		else
		{
			tail->next = (Train*)malloc(sizeof(Train));
			tail = tail->next;
		}
	}
	return 0;
}