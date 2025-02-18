#include<stdio.h>
int sum(int a[][10],int,int);
int input(int[][10],int,int);
void main()
{
    int a[10][10],m,n;
    printf("enter the size of metri: ");
    scanf("%d",&m);
    n=m;
    input(a,m,n);
    sum(a,m,n);
}
int input(int a[][10],int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("enter the %d rows compionants\n",i+1);
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    
}
int sum(int a[][10],int m,int n)
{
    int i,j,sum=0;
    for ( i = 0; i <m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (i==j)
            {
              sum=sum+a[i][j];
            }
            
        }
        
    }
    
printf("the sum of diagonal componants is %d",sum);
}