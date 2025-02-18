#include<stdio.h>
void main()
{
    int a[10];
    int i,pos,n,x;
    printf("how many number you want to enter:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);

    }
 printf("which number you want to insert:");
 scanf("%d",&x);
 printf("at which position:");
 scanf("%d",&pos);
 if(pos<0 || pos>n-1)
 {
  printf("invalid inut"); 
 goto end;
 }    
 for ( i = n; i >pos; i--)
 {
   a[i]=a[i-1];
 }
 a[pos]=x;
 n+=1;
 printf("new array is :");
 for ( i = 0; i < n; i++)
 {
   printf("%d  ",a[i]);
 }
 end: ;
 
}