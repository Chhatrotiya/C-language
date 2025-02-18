#include<stdio.h>
void main()
{
    int m,n;
    int a[100][100];
    int i,j;
    printf("enter the number of rows:\n");
    scanf("%d",&m);
    printf("enter the number of column:\n");
    scanf("%d",&n);
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
    printf("transpose matrix is :\n");
    for ( j = 0; j <n; j++)
    {
       for ( i = 0; i <m; i++)
       {
       printf("%d ",a[i][j]);
       }
      printf("\n"); 
    }
    
    
}