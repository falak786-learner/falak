# include <stdio.h>
int main()
{
    struct college{
        int rollnumber;
        float marks;
    };
    struct college student1;
    student1.rollnumber=101;
    student1.marks=88.5;

    struct college student2;
    student2.rollnumber=102;
    student2.marks=84.50;

    printf ("student1\nroll number:%d\n",student1.rollnumber);
    printf ("marks:%f\n",student1.marks);

     printf ("\nstudent2\nroll number:%d\n",student2.rollnumber);
    printf ("marks:%f\n",student2.marks);
    
    return 0;
}