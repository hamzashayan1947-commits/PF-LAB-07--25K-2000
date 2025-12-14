#include <stdio.h>
#include <stdlib.h>
int main()
{
    int stu_marks[12], i, COUNT = 0;
    for (i = 0; i < 12; i++)
    {
        printf("enter number of student %d: ", i + 1);
        scanf("%d", &stu_marks[i]);
        if (stu_marks[i] >= 90 && stu_marks[i] <= 100)
        {
            printf("Grade A+.\n");
        }
        else if (stu_marks[i] >= 86 && stu_marks[i] <= 89)
        {
            printf("Grade A.\n");
        }
        else if (stu_marks[i] >= 82 && stu_marks[i] <= 85)
        {
            printf("Grade A -. \n");
        }
        else if (stu_marks[i] >= 78 && stu_marks[i] <= 82)
        {
            printf("Grade B+.\n");
        }
        else if (stu_marks[i] >= 74 && stu_marks[i] <= 78)
        {
            printf("Grade B.\n");
        }
        else if (stu_marks[i] >= 70 && stu_marks[i] <= 74)
        {
            printf("Grade B -. \n");
        }
        else if (stu_marks[i] >= 66 && stu_marks[i] <= 70)
        {
            printf("Grade C+.\n");
        }
        else if (stu_marks[i] >= 62 && stu_marks[i] <= 65)
        {
            printf("Grade C.\n");
        }
        else if (stu_marks[i] >= 58 && stu_marks[i] <= 61)
        {
            printf("Grade C -. \n");
        }
        else if (stu_marks[i] >= 54 && stu_marks[i] <= 58)
        {
            printf("Grade D+.\n");
        }
        else if (stu_marks[i] >= 50 && stu_marks[i] <= 54)
        {
            printf("Grade D.\n");
        }
        else if (stu_marks[i] < 50)
        {
            printf("Grade F.\n");
            COUNT = COUNT + 1;
        }
    }
    printf("student fail = %d\n", COUNT);
    if (COUNT > 6)
        printf("Academic Alert: Poor Performance!\n");
    return 0;
}