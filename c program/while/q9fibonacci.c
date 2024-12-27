#include<stdio.h>
int main()
{
    int n,i,a=1,b=1,sum=1;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    
      printf("the %dterm of fibonacci is %d\n",n,sum);  
    }
    return 0;
}