#include<stdio.h>
int main()
{
   int n,i,a[100];
   void bubblesort (int a[],int n);
   printf("enter the number of elements:");
   scanf("%d",&n);
   for(i=0;i<=n-1;i++)
   {
     printf("enter a value:");
   scanf("%d",&a[i]);
   }
    void bubblesort (a,n);
    //return 0;
   void bubblesort (int a[],int n);
{
    int i,j,temp;
    for (int j=0;j<=n-2;j++)
{
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}
}
printf ("ater sorting\n");
for(i=0;i<=n-1;i++)
{
    printf("%d\n",a[i]);
}
}