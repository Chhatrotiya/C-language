#include<stdio.h>
void main()
{
   int a,b,m,i=1;
   printf("enter the two intger");
   scanf("%d%d",&a,&b);
   m=a;
   while(m%b!=0)
   {
    i++;
    m=a*i;
   }
   printf("lsf of %d and %d=%d\n",a,b,m);
}