#include<stdio.h>
void main(){
    int a[10],beg,mid,end,n,i,found=0,num;
    printf("enter the number of array\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
    printf("enter the number:");
    scanf("%d",&a[i]);
    }
    printf("enter the number you want to find in array");
    scanf("%d",&num);
    beg=0,end=n-1;
   while (beg<=end)
   {
    mid=(beg+end)/2;
    if (a[mid]==num)
    {
     printf("your entered number found at %d",mid);
     found=1;
     break;   
    }
    if(a[mid]>num)
        end=mid-1;
    else if(a[mid]<num)
        beg=mid+1;
   }
if(beg>end && found==1) 
{
    printf("your enteredd number is not present in array");
}   
}