#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MAX 32767
#define ITERATION 100

int main(void)
{
	srand(time(NULL));
	int i = 0;
	double r1, r2, v, z, k, x1[ITERATION], x2[ITERATION];
	int count = 0;
	while (i < ITERATION)
	{
		method1:
		r1 = (double)rand() / MAX;
		r2 = (double)rand() / MAX;

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x1[i] = z;
			i++;
		}
		else if ((k > (0.259 / r1) + 0.35) || (k > -log(r1)))
			goto method1;
	}
	i = 0;
	while (i < ITERATION)
	{
	method2:
		r1 = (double)rand() / MAX;
		r2 = (double)rand() / MAX;

		v = sqrt(2 / exp(1.0)) * (2 * r2 - 1);
		z = v / r1;
		k = ((double)1 / 4) * z * z;

		if (k < 1 - r1)
		{
			x2[i] = z;
			i++;
		}
		else if ((k > (0.259 / r1) + 0.35) || (k > -log(r1)))
			goto method2;
	}
	for (i = 0; i < ITERATION; i++)
	{
		if ((1.0 * x1[i] >= -1.0 && 1.0 * x1[i] <= 1.0) && (1.2 * x2[i] >= -1.0 && 1.2 * x2[i] <= 1.0))
		{
			count++;
		}
	}
	double probability = 0;
	probability = (double)count / ITERATION;
	printf("the missile's chances of success : %.2lf", probability);
	return 0;
}