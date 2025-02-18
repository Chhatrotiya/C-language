#include<stdio.h>
#include<stdlib.h>
#define max 50
int stack[max],tos=-1;
int count=0;
void pop();
void push();
void  peep();
void peek();
void change();
void main(){
    int j;
    while (1)
    {
    printf("enter number for\n1.push:\n2.pop:\n3.travers:\n4.peep:\n5.peek:\n6.change:\n7.count\n8.exit:\n");
    scanf("%d",&j);
    if (j==8)
    {
       break;
    }
switch (j)
{
case 1:push();
    break;
case 2:pop();
break;
case 3:
if (tos==-1)
{
printf("stack is empty");
}

      printf("now stack is:\n");
    for (int i =tos; i>-1; i--)
    {
        printf("%d\n",stack[i]);
    }
    break;
case 4:peep();
break;
case 5:peek();
break;
case 6:change();
break;
case 7:
printf("totle element is:%d\n",count);
default:
    break;
}
    }
}
void push()
{
    int item;
    if (tos==max-1)
    {
        printf("stack overflow");
    }
    else{
     printf("enter the number:");
     scanf("%d",&item);
     tos++;
     stack[tos]=item;
     count++;
    }
    
}
void pop(){
    int item;
    if (tos==-1)
    {
        printf("stack underflow");
    }
    else{
        
        item=stack[tos];
        tos--;
        printf("removing %d\n",item);
        count--;
    }
    
}
void peep()
{
    int i;
    printf("enter the no of element with respect to tos");
    scanf("%d",&i);
 if(tos==-1){
        printf("stack underflow");
    }
       else if (tos+1-i<0 || tos+1-i>tos)
    {
    printf("invalid input");
    }
    else if(tos+1-i>-1 && tos+1-i<tos)
    {
        printf("the element is :%d\n",stack[tos+1-i]);
    }
 
}
void peek()
{
    if(tos==-1)
    {
        printf("stack underflow");
    }
    else{
        printf("top element is %d\n",stack[tos]);
    }
}
void change()
{
    int i,item;
    printf("enter the no of element with respect to tos\n");
    scanf("%d",&i);
    printf("enter the element you want to put\n");
    scanf("%d",&item);
    if (tos==-1)
    {
    printf("stack underflow\n");
    }
    else if (tos+1-i<0 || tos+1-i>tos)
    {
    printf("invalid input");
    }
    else if(tos+1-i>-1 && tos+1-i<tos){
        stack[tos+1-i]=item;
    }
}    
