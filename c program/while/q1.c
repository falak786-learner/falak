#include<stdio.h>
int main()
{
    int sum=0,ld=0,n;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        ld=n%10;
        sum=sum+ld;
        n=n/10;
    }
    printf("sum of given number is:%d",sum);
    return 0;
}