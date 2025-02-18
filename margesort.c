#include<stdio.h>
void margesort(int [],int,int);
void marge(int [],int,int,int);
void main(){
    int n,a[10];
    int i;
    printf("how many number you want to sort?\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    margesort(a,0,n-1);
    printf("sorted array:\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d  ",a[i]);
    }
}
void margesort(int a[],int low,int high){
    int mid;
if(low<high){
    mid=(low+high)/2;
    margesort(a,low,mid);
    margesort(a,mid+1,high);
    marge(a,low,mid,high);
}
}
void marge(int a[],int low,int mid,int high){
    int b[10]; 
    int i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while (i<=mid&&j<=high)
    {
        if(a[i]<a[j])
        {
            b[k]=a[i];
            i++,k++;
        }
        else{
            b[k]=a[j];
            j++,k++;
        }
    }
    while (i<=mid)
    {
        b[k]=a[i];
        i++,k++;
    }
   while (j<=high)
    {
        b[k]=a[j];
        j++,k++;
    } 
    for ( i = low; i <=high; i++)
    {
        a[i]=b[i];
    }
    
}