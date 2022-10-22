/*주교재, pp.120, 도전실전예제*/
#include <stdio.h>

int main(void)
{
	double Weight = 0.0;
	double Height = 0.0;
	double BMI = 0.0;

	printf("Enter your weight (kg) and height (cm).:\n");
	scanf_s("%lf%lf", &Weight, &Height);

	BMI = Weight / ((Height * 0.01) * (Height * 0.01));

	printf("Results of BMI : %lf\n", BMI);
	printf("Your condition : ");
	((BMI > 20.0) && (BMI < 25.0)) ? printf("Standard.\n") : printf("Need to take care of your weight.\n");
	return 0;
}
