#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX 99
#define REPETITION 5

double average(int *rd);
void random(int *rd);
double variance(int* rd);
double standard_deviation(int *rd);

int main()
{
	int randomnum[5];
	double avg;
	double var;
	double sd;
	srand(time(NULL));
	random(randomnum);
	avg = average(randomnum);
	var = variance(randomnum);
	sd = standard_deviation(randomnum);
	printf("Average : %.1lf, Variance : %.1lf, standard_deviation : %.1lf\n", avg, var, sd);
	return 0;
}

void random(int *rd)
{
	int i;
	for (i = 0; i < REPETITION; i++)
	{
		rd[i] = (rand() % MAX) + 1;
	}
}

double average(int* rd)
{
	double N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	double avg = 0;
	N1 = rd[0];
	N2 = rd[1];
	N3 = rd[2];
	N4 = rd[3];
	N5 = rd[4];
	avg = (N1 + N2 + N3 + N4 + N5) / REPETITION;
	return avg;
}

double variance(int* rd)
{
	double N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	double var = 0;
	double avg = 0;
	N1 = rd[0];
	N2 = rd[1];
	N3 = rd[2];
	N4 = rd[3];
	N5 = rd[4]; 
	avg = (N1 + N2 + N3 + N4 + N5) / REPETITION;
	var = ((N1*N1 + N2*N2 + N3*N3 + N4*N4 + N5*N5) / REPETITION) - (avg * avg);
	return var;
}

double standard_deviation(int* rd)
{
	double N1 = 0, N2 = 0, N3 = 0, N4 = 0, N5 = 0;
	double var = 0;
	double avg = 0;
	double sd = 0;
	N1 = rd[0];
	N2 = rd[1];
	N3 = rd[2];
	N4 = rd[3];
	N5 = rd[4];
	avg = (N1 + N2 + N3 + N4 + N5) / REPETITION;
	var = ((N1 * N1 + N2 * N2 + N3 * N3 + N4 * N4 + N5 * N5) / REPETITION) - (avg * avg);
	sd = sqrt(var);
	return sd;
}