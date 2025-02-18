#include<stdio.h>
void main(){
    int n,a[10];
    int temp,index1,i,j;
    printf("how many numbe you want to sort?\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
for ( i = 0; i < n-1; i++)
{
    index1=i;
    for ( j = i+1; j < n; j++)
    {
    if (a[j]<a[index1])
    {
        index1=j;
    }
    }
  temp=a[i];
  a[i]=a[index1];
  a[index1]=temp;  
}
printf("sorted array is:\n");
for ( i = 0; i <n; i++)
{
printf("%d  ",a[i]);
}

}