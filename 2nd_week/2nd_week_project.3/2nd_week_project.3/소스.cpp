//�ֱ���, pp. 99, Ȯ�ι��� 3�� 
#include <stdio.h>

int main(void)
{
	int kor = 3;
	int eng = 5;
	int	mat = 4;

	double kscore = 3.8;
	double escore = 4.4;
	double mscore = 3.9;

	int credits = kor + eng + mat;
	double grade = (kscore + escore + mscore) / 3;
	int res = ((credits > 10) && (grade > 4.0)) ? 1 : 0;
	printf("Taehee's grade (credits, grade) : (%d, %lf)\n", credits, grade);
	printf("The result is : %d\n", res);
	return 0;
}