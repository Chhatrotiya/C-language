#include<stdio.h>
void main()
{
    int i,j,n;
printf("enter the number of rows");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
    for ( j = 0; j < n; j++)
    {
        if (j>=i)
        {
            printf("*");

        }
        else
        printf(" ");
        
    }
    printf("\n");
    
    
}

}