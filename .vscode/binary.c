#include<stdio.h>
void bin(int);
void main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    bin(n);
}
void bin(int n)
{
    unsigned int b[16];
    int i,m=15;
    while (n!=0)
    {
        b[m]=n%2;
        m--;
        n=n/2;
    }
    printf("binary number of entered number is:\n");
    for ( i = ++m; i < 16; i++)
    {
        printf("%d",b[i]);
    }
    
    
}