 //주교재, pp. 82, 확인문제 3번
#include <stdio.h>
int main(void)
{
	char ch;

	printf("Enter characters :");
	scanf_s("%c", &ch);
	printf("Enter characters : %c\n", ch);
	printf("Assky code for entered characters : %d\n", ch);
	return 0;
}