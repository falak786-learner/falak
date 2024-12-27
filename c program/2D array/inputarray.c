# include <stdio.h>
int main ()
{
    int i,j,arr[3][3];//={{2,3},{5,6}};
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf ("%d",&arr[i][j]);
        }
    }
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d",&arr[i][j]);
        }
    }
  return 0;
}