 //�ֱ���, pp. 82, Ȯ�ι��� 3��
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