#include<stdio.h>
void swap(int,int);
void main(){
    int a,b;
    printf("enter the number you wnat to swap\n");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("value of a is %d and value of b is %d\n",a,b);
}
void swap(int a,int b){
    int t;
    t=a;
    a=b;
    b=t;
    printf ("value of a is %d and value of b  is %d\n",a,b);
}