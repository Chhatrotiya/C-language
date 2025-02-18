#include <stdio.h>
int main()
{
    int a[10];
    int i,max,min;
for ( i = 0; i < 10; i++)
{
    printf("enter %d number:",i+1);
    scanf("%d",&a[i]);
}
for ( i = 0; i < 10; i++)
{
    if(i==0)
    {
        max=a[i];
        min=a[i];
    }
    if (max<a[i])
    {
        max=a[i];
    }
    if (min>a[i])
    {
    min=a[i];
    }
    
}
printf("the maximum number is %d\n",max);
printf("the minimum number is %d",min);

    
   
}