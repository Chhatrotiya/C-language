#include<stdio.h>
int hcf(int,int);
void main()
{
    int a,b,r;
    printf("enter the two numbr");
    scanf("%d%d",&a,&b);
    r=hcf(a,b);
    printf("hcf of two number is %d",r);
}
int hcf(int a,int b)
{
    while (a!=b)
    {
        if (a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
        
    }
    return a;
}