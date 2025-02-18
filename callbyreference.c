#include<stdio.h>
void swap(int *,int *);
void main()
{
  int a,b;
  printf("enter the value of a and b");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("value of a is %d and value of b is %d",a,b);
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;

}
