#include <stdio.h>
int rec_func(int n);
int main()
{
	int res = 0;
	int N = 0;
	printf("Enter a number : ");
	scanf_s("%d", &N);
	res = rec_func(N);
	printf("Result : %d\n", res);
	return 0;
}

int rec_func(int n)
{
	int res;
	if (n == 1)
		return 1;
	res = n + rec_func(n - 1);
	return res;
}