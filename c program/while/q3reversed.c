#include<stdio.h>
int main()
{
    int ld=0,n,r=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n!=0)
    {
        r=r*10;
        ld=n%10;
        r=r+ld;
        n=n/10;
    }
    printf("reversed number is:%d",r);
    return 0;
}