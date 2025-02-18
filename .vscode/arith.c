#include<stdio.h>
void p(int *num){
    printf("%d",*num);
}
void main(){
    int a[3]={0,1,2};
    p(&a[2]);
}