#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the number of rows");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j< n; j++)
        {
            if (i==0 || j==0 || i==n-1 || j==n-1)
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
        
    }
    
}