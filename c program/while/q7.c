#include<stdio.h>
int main()
{
    int product=1,n,i;
    printf("enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        product=product*i;
        printf("factorial of %d number is:%d\n",i,product);
    }
    return 0;
}