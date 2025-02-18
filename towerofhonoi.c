#include<stdio.h>
void toh(int,char,char,char);
void main(){
    int n;
    printf("enter the number of disk");
    scanf("%d",&n);
    toh(n,'a','b','c');
}
void toh(int n,char a,char b,char c){
    if (n==1)
    {
    printf("move: %c to %c\n",a,c);
    }
    else{
        toh(n-1,a,c,b);
        toh(1,a,b,c);
        toh(n-1,b,a,c);
    }
    
}