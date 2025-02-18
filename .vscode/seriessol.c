#include<stdio.h>
int sum=1,term;
void cal_term(int x,int p)
{
    int i;
    term=1;
    for ( i = 0; i <p; i++)
    {
        term=term*x;
    }
    
}
void series(int x,int n)
{
    int i;
    for ( i = 1; i <=n; i++)
    {
        cal_term(x,i);
        sum=sum+term;
    }
    printf("answer=%d",sum);
}
void main()
{
    int x,n;
    printf("enter the value of x and n");
    scanf("%d%d",&x,&n);
    series(x,n);
}