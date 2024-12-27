# include <stdio.h>
int main ()
{
    int i,n;
    float sum=0.0;
    printf ("enter a number:");
    scanf ("%d",&n);
    for (i=1;i<=n;i++)
    {
        sum = sum + 1.0/i;
    }
    printf ("the value of the series is:%.2f\n",sum);
    return 0;
}