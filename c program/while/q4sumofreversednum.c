#include<stdio.h>
int main()
{
    int total,rev=0,n,ld;
    printf("ENTER the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        rev=rev*10;
        rev=rev+(n%10);
        n=n/10;    
    }
    rev=rev;
    total=n+rev;
    printf("reversed number is:%d\n",rev);
    printf("sum of reversed and entered number is:%d",total);
    return 0;
}