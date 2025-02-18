#include<stdio.h>
void main()
{
    int i,n,a[10];
    int *p;
    p=a;
    printf("how many number you want tto enter:");
    scanf("%d",&n);
    printf("enter the number:\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",p+i);
    }
    p=a;
    printf("reversed array is:\n");
    for ( i = n-1;i>=0; i--)
    {
        printf("%d\n",*(p+i));
    }
    
    
}