#include<stdio.h>
void main()
{
    int a[100][100];
    int m,n;
    int i,j,condition=0;
   printf("enter the number of rows:\n");
    scanf("%d",&m);
    printf("enter the number of column:\n");
    scanf("%d",&n);
    if (m!=n)
    {
        printf("row's and coloumn's value must be same");
        goto end;
    }
    
    printf("enter the element of metrix:\n");
    for ( i = 0; i < m; i++)
    {
       for ( j= 0; j <n; j++)
       {
      printf("a[%d][%d]=",i,j);
      scanf("%d",&a[i][j]);
       }
       
    }
     for ( i = 0; i < m; i++)
    {
       for ( j= 0; j <n; j++)
       {
      printf("%d",a[i][j]);
    
       }
       printf("\n");
       
    }
    for ( i = 0; i < m; i++)
    {
       for ( j= 0; j <n; j++)
       {
    if (a[i][j]!=a[j][i])
    {
       condition=1;
       break;
    }
       } 
    }
    if (condition==1)
    {
        printf("matrix is not symmetric");
    }
else
{
    printf("metrix ia symmetric");
}
    end:;
}