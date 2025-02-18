#include<stdio.h>
int fact(int n);
void main()
{
    int n,s;
       printf("enter the number you want to fact");
    scanf("%d",&n);
   s=fact(n);
   printf("factorial is %d",s);
}
int fact(int n)
{
    int f;
 
    if(n==1 || n==0)
   {
     return 1;
   }
   else
 { 
     f=n*fact(n-1);
    return (f);
 }
}