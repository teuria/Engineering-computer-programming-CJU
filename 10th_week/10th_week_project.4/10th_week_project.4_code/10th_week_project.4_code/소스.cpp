#include <stdio.h>

struct marriage
{
	char name[20];
	int age;
	char sex;		//man : 'm', girl : 'f'
	double height;
};
struct marriage m1 = { "Andy", 22, 'm', 187.5 };
struct marriage* mp = &m1;

int main(void)
{
	printf("Name : %s\n", mp->name);
	printf("age : %d\n", mp->age);
	printf("sex (man:'m', girl:'f') : %c\n", mp->sex);
	printf("height : %.1lf\n", mp->height);
	return 0;
}