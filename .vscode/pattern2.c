#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i+j>=n-1)
            printf("*");

            else
            printf(" ");

        }
        printf("\n");
    }
    
}