//����Ʈ�� �ִ� ��������(p.7)
// 
//#include <stdio.h>
//int main(void)
//{
//	int a = 20;
//	int b = 0;
//	if (a > 10)
//	{
//		b = a;
//	}
//	printf("a : %d, b : %d\n", a, b);
//	return 0;
//}

//����Ʈ�� �ִ� ��������(p.9)
// 
//#include <stdio.h>
//int main(void)
//{
//	int a = 10;
//	if (a >= 0)
//	{
//		a = 1;
//	}
//	else
//	{
//		a = -1;
//	}
//	printf("a : %d\n", a);
//	return 0;
//}

//�������� ���� ����
// 
//#include <stdio.h>
//
//#define MAX 10
//#define MIN -10
//
//int main(void)														//int main(void) = int main() ��ĭ�ȿ� void�� ���� ����ֵ� �Ȱ���.
//{
//	int nA = 0;
//	int nB = 0;
//
//	printf("Input your integer variable : \n");
//	scanf_s("%d%d", &nA, &nB);
//
//	int nRes = nA + nB;
//
//	if (nRes > MAX)
//	{
//		printf("Your Result : %d, is over w.r.t MAX\n", nRes);
//	}
//	else if (nRes < MIN)
//	{
//		printf("Your Result : %d, is over w.r.t MIN\n", nRes);
//	}
//	else
//	{
//		printf("Your Result : %d\n", nRes);
//	}
//	return 0;
//}