#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXNUM 9
#define COLUMN 3
#define ROW 2

int main(void)
{
	srand(time(NULL));
	int Matrix1[COLUMN][ROW];
	int i, j;
	for (i = 0; i < COLUMN; i++)
	{
		for (j = 0; j < ROW; j++)
		{
			Matrix1[i][j] = (rand() % MAXNUM) + 1;
			printf("%5d", Matrix1[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int Matrix2[ROW][COLUMN];
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			Matrix2[i][j] = (rand() % MAXNUM) + 1;
			printf("%5d", Matrix2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	int Matrix[COLUMN][COLUMN];
	for (i = 0; i < COLUMN; i++)
	{
		for (j = 0; j < COLUMN; j++)
		{
			Matrix[i][j] = (Matrix1[i][0] * Matrix2[0][j] + Matrix1[i][1] * Matrix2[1][j]);
			printf("%5d", Matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}




//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//#define MAXNUM 9
//#define COLUMN 3
//#define ROW 2
//
//int main(void)
//{
//	srand(time(NULL));
//	int Matrix1[COLUMN][ROW];
//	int i, j;
//	for (i = 0; i < COLUMN; i++)
//	{
//		for (j = 0; j < ROW; j++)
//		{
//			Matrix1[i][j] = (rand() % MAXNUM) + 1;
//			printf("%5d", Matrix1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	int Matrix2[ROW][COLUMN];
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COLUMN; j++)
//		{ 
//			Matrix2[i][j] = (rand() % MAXNUM) + 1;
//			printf("%5d", Matrix2[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n");
//	int N1 = ((Matrix1[0][0]) * (Matrix2[0][0])) + ((Matrix1[0][1]) * (Matrix2[1][0]));
//	int N2 = ((Matrix1[0][0]) * (Matrix2[0][1])) + ((Matrix1[0][1]) * (Matrix2[1][1]));
//	int N3 = ((Matrix1[0][0]) * (Matrix2[0][2])) + ((Matrix1[0][1]) * (Matrix2[1][2]));
//	int N4 = ((Matrix1[1][0]) * (Matrix2[0][0])) + ((Matrix1[1][1]) * (Matrix2[1][0]));
//	int N5 = ((Matrix1[1][0]) * (Matrix2[0][1])) + ((Matrix1[1][1]) * (Matrix2[1][1]));
//	int N6 = ((Matrix1[1][0]) * (Matrix2[0][2])) + ((Matrix1[1][1]) * (Matrix2[1][2]));
//	int N7 = ((Matrix1[2][0]) * (Matrix2[0][0])) + ((Matrix1[2][1]) * (Matrix2[1][0]));
//	int N8 = ((Matrix1[2][0]) * (Matrix2[0][1])) + ((Matrix1[2][1]) * (Matrix2[1][1]));
//	int N9 = ((Matrix1[2][0]) * (Matrix2[0][2])) + ((Matrix1[2][1]) * (Matrix2[1][2]));
//	int Matrix[4][4] = { {N1, N2, N3}, {N4, N5, N6}, {N7, N8, N9} };
//	for (i = 0; i < COLUMN; i++)
//	{
//		for (j = 0; j < COLUMN; j++)
//		{
//			printf("%5d", Matrix[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}