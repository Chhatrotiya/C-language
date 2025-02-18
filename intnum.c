#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the number a and b");
    scanf("%d%d",&a,&b);
    c=a,a=b,b=c;
    printf("the number a is %d and number b is %d",a,b);
    return 0;
}