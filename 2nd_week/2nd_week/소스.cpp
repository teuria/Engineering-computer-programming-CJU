// 주교재, pp. 50, 확인문제 3번
//#include <stdio.h>
//int main(void)
//{
//	printf("StudentID : %d\n", 2021010530);
//	printf("Name : %s\n", "박진우");
//	printf("Grade : %c\n", 'A');
//	return 0;
//}
 
// 주교재, pp. 82, 확인문제 3번
//#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	printf("문자 입력 :");
//	scanf_s("%c", &ch);
//	printf("문자 입력 : %c\n", ch);
//	printf("입력된 문자의 아스키 코드 : %d\n", ch);
//	return 0;
//}

//주교재, pp. 99, 확인문제 3번 
//#include <stdio.h>
//
//int main(void)
//{
//	int kor = 3;
//	int eng = 5;
//	int	mat = 4;
//
//	double kscore = 3.8;
//	double escore = 4.4;
//	double mscore = 3.9;
//
//	int credits = kor + eng + mat;
//	double grade = (kscore + escore + mscore) / 3;
//	int res = ((credits > 10) && (grade > 4.0)) ? 1 : 0;
//	printf("태희의 성적(총학점, 평점 평균) : (%d, %lf)\n", credits, grade);
//	printf("태희의 결과값은 : %d\n", res);
//	return 0;
//}

// 주교재, pp.120, 도전실전예제
//#include <stdio.h>
//
//int main(void)
//{
//	double Weight = 0.0;
//	double Height = 0.0;
//	double BMI = 0.0;
//
//	printf("당신의 체중(kg)과 키(cm)를 입력하세요.:\n");
//	scanf_s("%lf%lf", &Weight, &Height);
//
//	BMI = Weight / ((Height * 0.01) * (Height * 0.01));
//
//	printf("BMI의 결과값 : %lf\n", BMI);
//	printf("너의 상태 : ");
//	((BMI > 20.0) && (BMI < 25.0)) ? printf("표준입니다.\n") : printf("체중관리가 필요합니다.\n");
//	return 0;
//}
