#include <stdio.h>
int main()
{
    int i,j,marks[3][3]={
        {85,90,78},//marks of student 1 in 3 subjects
         {88,76,91},//marks of student 1 in 3 subjects
         {79,85,88}//marks of student 1 in 3 subjects
    };
    printf("Marks of student:\n");
    printf("student\tstudent1\tstudent2\tstudent3\n");
    //loop through each student and each subject
    for(i=0;i<3;i++)
    {
        printf("%d\t",i+1);//print student number
     for(j=0;j<3;j++)
    {
        printf("%d\t\t",marks[i][j]);//print marks of each subject
    }
    printf("\n");
    }
    return 0;
}