#include<stdio.h>

void main(){
int n;
printf("enter the number you want print the table\n");
scanf("%d",&n);
for (int i = 1; i < 11; i++)
{
    printf("%d X %d = %d\n",n,i,n*i);
}



}