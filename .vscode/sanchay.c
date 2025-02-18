#include<stdio.h>
 int fact(int);
void main()
{
    int n,r;
    int a;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    if (n<0 || r<0 || r>n)
    {
        printf("input is invalide");
    }
    else
    {
        a=fact(n)/(fact(r)*fact(n-r));
        printf("answer=%d",a);
    }
}
 int fact(int n)
{
    if (n==0)
    {
    return 1;
    }
    else{
        return n*fact(n-1);
    }
}