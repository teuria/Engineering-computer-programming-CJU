#include <stdio.h>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#define NUMBER_OF_SUBJECTS 3.0
#define GRADE_A 90.0
#define GRADE_B 80.0
#define GRADE_C 70.0

typedef struct student
{
    int st_id;
    char name[20];
    int kor, eng, math;
    int total;
    double avg;
    char grade;
} Student;

void input_data(Student* pary);
void calc_data(Student* pary);
void sort_data(Student* pary);
void print_data(Student* pary);

int main(void)
{
    Student ary[5];

    input_data(ary);
    calc_data(ary);

    printf("# Before arrange data...\n");
    print_data(ary);
    sort_data(ary);
    printf("\n# After arrange data...\n");
    print_data(ary);
    return 0;
}

void input_data(Student* pary)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("St_id : ");
        scanf_s("%d", &pary->st_id);
        printf("name : ");
        scanf("%s", pary->name);
        printf("kor, eng, math scores : ");
        scanf_s("%d %d %d", &pary->kor, &pary->eng, &pary->math);
        pary++;
    }
}

void calc_data(Student* pary)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        pary->total = pary->kor + pary->eng + pary->math;
        pary->avg = pary->total / NUMBER_OF_SUBJECTS;
        if (pary->avg >= GRADE_A) 
        {
            pary->grade = 'A';
        }
        else if (pary->avg >= GRADE_B) 
        {
            pary->grade = 'B';
        }
        else if (pary->avg >= GRADE_C) 
        {
            pary->grade = 'C';
        }
        else 
        {
            pary->grade = 'F';
        }
        pary++;
    }
}

void sort_data(Student* pary)
{
    Student temp;
    int i, j;
    int max;

    for (i = 0; i < 4; i++)
    {
        max = i;
        for (j = i + 1; j < 5; j++)
        {
            if (pary[max].total < pary[j].total)
            {
                max = j;
            }
        }
        if (max != i)
        {
            temp = pary[max];
            pary[max] = pary[i];
            pary[i] = temp;
        }
    }
}

void print_data(Student* pary)
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%5d %7s %5d %5d %5d %5d %7.1lf %5c\n",pary->st_id, pary->name, pary->kor, pary->eng,pary->math, pary->total, pary->avg, pary->grade);
        pary++;
    }
}
