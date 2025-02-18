#include<stdio.h>
void t(char na[][20],int m[][3],int n);
void main()
{
    char na[10][20];
    int m[10][3],n,i,j;
    printf("how many student:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the name of student:\n");
        scanf("%s",na[i]);
        printf("enter the marks of three subject:");

        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&m[i][j]);
        }
        
    }
    t(na,m,n);
    
}
void t(char na[][20],int m[][3],int n)
{
    int i,j,tot;
    for ( i = 0; i < n; i++)
    {
        tot=0;
        puts(na[i]);
        for ( j = 0; j < 3; j++)
        {
            printf("%d \n ",m[i][j]);
            tot=tot+m[i][j];
        }
        printf("totle=%d\n",tot);
        
    }
    
}