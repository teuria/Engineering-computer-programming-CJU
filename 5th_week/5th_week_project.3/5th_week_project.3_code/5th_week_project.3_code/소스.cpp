#include <stdio.h>
int operation(int x, int y, char Ch);
int main(void)
{
	int A = 0;
	int B = 0;
	char Ch;
	int result;
	printf("Enter a number to calculate and math symbol and a number to calculate : ");
	scanf_s("%d %c %d", &A, &Ch, 1, &B);
	result = operation(A, B, Ch);
	printf("The calculated result is : %d", result);
	return 0;
}

int operation(int x, int y, char Ch)
{
	int temp;
	switch (Ch)
	{
	case '+':
		temp = x + y;
		break;
	case '-':
		temp = x - y;
		break;
	case '*':
		temp = x * y;
		break;
	default:
		temp = x / y;
		break;
	}	
	return temp;
}
