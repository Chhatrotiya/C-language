#include<stdio.h>
void main()
{
    int i,n,a[100];
    int *p;
    p=a;
    printf("how many numbers?:");
    scanf("%d",&n);
    printf("enter the number:");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",p+i);
    }
    p=a;
    printf("entered number is:\n");
    for ( i = 0; i < n; i++)
    {
       printf("%d\n",*(p+i));
    }
    
    
}