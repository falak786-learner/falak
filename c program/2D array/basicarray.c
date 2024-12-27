# include <stdio.h>
int main ()
{
    int i,j,arr[2][2]={{2,3},{5,6}};
    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {
            printf ("%d\t",arr[i][j]);
        }
        printf ("\n");
    }
  return 0;
}