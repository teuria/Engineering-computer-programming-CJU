#include <stdio.h>

struct book
{
	char title[80];
	char author[80];
	int page;
	int price;
};

int main(void)
{
	struct book b1 = { "���� ���� �߼���", "������", 612, 16200 },
				b2 = { "����� ����� �̷�", "�迬��", 276, 12600 },
				b3 = { "������ ����", "�̱�ȣ", 320, 13500 };
	printf("The first book titile : %s, author : %s, page : %d, price : %d\n", b1.title, b1.author, b1.page, b1.price);
	printf("The second book titile : %s, author : %s, page : %d, price : %d\n", b2.title, b2.author, b2.page, b2.price);
	printf("The third book titile : %s, author : %s, page : %d, price : %d\n", b3.title, b3.author, b3.page, b3.price);
	return 0;
}
