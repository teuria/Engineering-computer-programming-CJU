#include <stdio.h>

int main(void)
{
	int A = 0;						//A�� ���� �Է��� ���� 1
	int B = 0;						//B�� ���� �Է��� ���� 2
	int R = 0;						//R�� A�� B�� ������ �����
	char Ch;						//Ch�� ���� ��ȣ

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