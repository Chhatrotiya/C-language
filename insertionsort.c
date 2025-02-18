#include<stdio.h>
void main(){
int n,a[10];
int key,i,j;
printf("how many nuber youu want to sort?\n");
scanf("%d",&n);
for ( i = 0; i < n; i++)
{
    printf("enter the number:");
    scanf("%d",&a[i]);
}
for ( i = 1; i <=n-1; i++)
{
   key=a[i];
   j=i-1;
   while (j>=0 && a[j]>key)
   {
    a[j+1]=a[j];
    j--;
   }
    a[j+1]=key;
}
printf("sorted array is:\n");
for ( i = 0; i <n; i++)
{
    printf("%d  ",a[i]);
}

}