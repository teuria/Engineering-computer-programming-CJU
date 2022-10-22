#include <stdio.h>

int main(void)
{
	int A = 0;						//A는 내가 입력할 숫자 1
	int B = 0;						//B는 내가 입력할 숫자 2
	int R = 0;						//R는 A와 B를 연산한 결과값
	char Ch;						//Ch는 연산 기호

	printf("Enter a number to calculate and math symbol and a number to calculate: ");
	scanf_s("%d %c %d", &A, &Ch, 1, &B);

	if (Ch == '+')
	{
		R = A + B;
	}
	else if (Ch == '-')
	{
		R = A - B;
	}
	else if (Ch == '*')
	{
		R = A * B;
	}
	else
	{
		R = A / B;
	}
	printf("The calculated result is : %d", R);
	return 0;
}