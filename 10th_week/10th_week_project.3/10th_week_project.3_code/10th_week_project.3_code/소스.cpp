#include <stdio.h>

struct crackers
{
	int price;
	int calories;
};

int main(void)
{
	struct crackers basasak;
	basasak.price = 0;
	basasak.calories = 0;
	printf("Enter the price and calories of the basasak cracker : ");
	scanf_s("%d %d", &basasak.price, &basasak.calories);
	printf("the price of the basasak cracker : %dwon\n", basasak.price);
	printf("the calories of the basasak cracker : %dkcal\n", basasak.calories);
	return 0;
}
