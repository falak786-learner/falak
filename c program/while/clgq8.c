#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);
    
    i=2;
    while(i<n)
    {
        if(n%i==0)
        printf("%d\n",i);
        i++;
    }
    return 0;
}