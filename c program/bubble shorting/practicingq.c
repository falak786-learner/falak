# include<stdio.h>
int main()
{
    int i,n,a[100];
    void ascend (int a[], int n);
    printf ("ENTER THE NUMBER OF ELEMENTS:");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf ("ENTER THE VALUE:");
        scanf ("%d",&a[i]);
    }
     void ascend (int a[],int n);
     {
       int i,j,temp;
        for (j=0;j<=n-2;j++)
    {
        if (a[j] > a[j+1]);
        {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
        }
    }
     }
    printf ("\nAFTER SHORTING:\n");
    for (i=0;i<=n-1;i++)
    {
        printf ("%d\n",a[i]);
    }
}
