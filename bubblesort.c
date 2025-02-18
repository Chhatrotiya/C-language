#include<stdio.h>
void main(){
    int temp,n,a[10];
    printf("how many numberr you want to sort?\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }    
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
        if (a[j]>a[j+1])
        {
          temp=a[j];
          a[j]=a[j+1];
          a[j+1]=temp; 
        }
        }
    }
    printf("sorted array is:\n");
  for (int i = 0; i < n; i++)
  {
printf("%d  ",a[i]);
  }
    
}