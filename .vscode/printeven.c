#include<stdio.h>
void e(int ,int);
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    e(0,n);
}
void e(int a,int n)
{
    if(a<=n)
    {
        printf("%d\t",a);
        e(a+2,n);
    }
    else
    return;
}