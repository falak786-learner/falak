#include<stdio.h>
int main()
{
   struct employee //user defined data type. employee ak bada sa box bangya
   // new datatype banaya
    {
      int d_number; //employee ka andar ak d_number datatype ka box bangya
      float salary;  //employee ka andar ak salary datatype ka box bangya
    };
    struct employee falak; //employe ka andar falak name ka box bangya
       falak.d_number = 01;
       falak.salary = 5000;
       //printf("%d\n",falak.d_number);

    struct employee aksa;
    printf("enter the d_number: ");
    scanf("%d",&aksa.d_number);
    printf("enter the salary: ");
    scanf("%f",&aksa.salary);
    printf("your d_number is %d and salary is %f",aksa.d_number,aksa.salary);
      // aksa.d_number = 02;
      // aksa.salary = 6000;
    
   
    return 0;
}