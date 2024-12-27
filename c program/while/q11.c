#include<stdio.h>
int main()
{
      int a,b,power=1,i;
      printf("enter base:");
      scanf("%d",&a);
      printf("enter power:");
      scanf("%d",&b);
      for(i=1;i<=b;i++)
      {
        power=power*a;
      
      printf("%d raised to the power %d is %d",a,b,power);
      }
    return 0;
}