#include<stdio.h>
int power(int,int);
void main()
{
    int a,b,c;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    c=power(a,b);
    printf("a^b=%d",c);
}
int power(int a,int b)
{
    int c;
    if(b==0)
    return 1;
    else
    {
       c=a*power(a,b-1);
       return c;
    }
}