#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void push(char,char []);
void pop(char []);
char eq[MAX];
int tos=-1,i=0;
void main(){
    char ch;
    char stack[50];
    printf("enter the equation\n");
    gets(eq);
    while (eq[i]!='\0')
    {
        ch=eq[i];
    if (ch=='(' || ch=='{' || ch=='[')
    {
    push(ch,stack);
    }
    else if(ch==')'|| ch=='}' || ch==']')
    {
     if (stack[tos]=='(' && ch==')')
     {
        pop(stack);
     }
     else if(stack[tos]=='[' && ch==']')
     {
        pop(stack);
     }
     else if (stack[tos]=='{' && ch=='}')
     {
        pop(stack);
     }
         }
    i++;
    }
    if (tos==-1)
    {
        printf("balanced");
    }
    else
    {
        printf("not balanced");
    }
    
}
void push(char a,char arr[])
{
    if(tos==MAX-1){
        printf("stack overflow");
        exit(0);
    }
    else{
        tos=tos+1;
        arr[tos]=a;
    }
}
void pop(char a[]){
    if(tos==-1){
        printf("stack underflow");
        printf("not balanced");
        exit(0);
    }
    else{ 
        tos=tos-1;
    }
}

