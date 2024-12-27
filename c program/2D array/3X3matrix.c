# include <stdio.h>
int main ()
{
    int i,j,arr[3][3];
    //input element in the 3*3 matrix
    printf ("enter element for 3*3 matrix\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf ("enter element for 3*3 matrix[%d][%d]:",i,j);
            scanf ("%d",&arr[i][j]);
        }
    }
    //display the matrix
    printf("\n the 3*3 matrix is:\n");
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d\t",arr[i][j]);
        }
    printf("\n");
    }
  return 0;
}