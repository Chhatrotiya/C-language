#include<stdio.h>
int s(int);
void main()
{
    int n,sum;
    printf("enter the number");
    scanf("%d",&n);
    sum=s(n);
    printf("the sumof digit is %d",sum);
}
int s(int n)
{
    int su=0,d;
    if (n==0)
    {
        return 0;
    }
    else{
        d=n%10;
        su=su+d+s(n/10);
        return su;
    }
}