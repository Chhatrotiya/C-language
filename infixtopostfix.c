#include <stdio.h>
#include <stdlib.h>
#define max 50
char st[max];
int tos = -1;
void push(char[], char);
char pop(char[]);
void intopo(char[], char[]);
int priority(char);
void main()
{
    char infix[50], post[50];
    printf("enter the infix expression:");
    gets(infix);
    intopo(infix, post);
    printf("postfix epression is:%s", post);
}
void intopo(char infix[], char post[])
{
    char temp;
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (infix[i]=='(')
        {
            push(st,infix[i]);
            i++;
        }
        else if(infix[i]==')')
        {
         while ((tos!=-1)&&(st[tos]!='('))
         {
          post[j]=pop(st);
          j++;
         }
         if(tos==-1)
         {
            printf("INCORRECT EXPRESSION\n");
            exit(0);
         }
         temp=pop(st); 
         i++;
        }
        else if (isdigit(infix[i]) || isalpha(infix[i]))
        {
            post[j]=infix[i];
            i++;
            j++;
        }
       else if (infix[i]=='+' || infix[i]=='-' || infix[i]=='*' || infix[i]=='/' || infix[i]=='%')
       {
    while ((tos!=-1)&&(st[tos]!='(') && (priority(st[tos])>priority(infix[i])))
        {
        post[j]=pop(st);
        j++;
        }
        push(st,infix[i]);
        i++;
       }
        else
        {
            printf("INCORRECT EXPRESSION\n");
            exit(0);
        }
    }
    while ((tos!=-1)&&(infix[i]!='('))
         {
          post[j]=pop(st);
          j++;
         }
         post[j]='\0';
}
int priority(char a)
{
    if(a=='*'||a=='/'||a=='%')
    {
        return 1;
    }
    else if (a=='+'|| a=='-')
    {
        return 0;
    } 
}
void push(char st[],char a)
{
    if (tos==max-1)
    {
        printf("stack overflow");
        exit(0);
    }
    else
    {
        tos++;
        st[tos]=a;
    }
}
char pop(char st[])
{
    char val='\0';
    if (tos==-1)
    {
        printf("stack underflow");
        exit(0);
    }
   else 
   {
    val=st[tos];
    tos--;
   }
    return val;
}