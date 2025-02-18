#include<stdio.h>
void r(int *,int *);
void main()
{
    int a[10];
    printf("enter the element of array:\n");
    for (int i = 0; i < 10; i++)
    {
       scanf("%d",&a[i]);
    }
    printf("enterer array no is:\n");
    for (int i = 0; i < 10; i++)
    {
      printf("%d\t",a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        r(&a[i],&a[9-i]);
    }
    printf("\n0reversed array nunbrc is:");
  for (int i = 0; i < 10; i++)
    {
      printf("%d\t",a[i]);
    }
    
}
void r(int *a, int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}