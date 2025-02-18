#include <stdio.h>
#include <stdlib.h>
#define MAX 30

void push(char a, char arr[]);
char pop(char arr[]);
int getp(char ch);
char ineqn[30], posteqn[30], stack[MAX];
int TOS = -1, TOS1 = -1;

void main()
{
    int i = 0, j = 0;
    char ch;
    printf("Enter the equation: ");
    scanf("%s", ineqn);
    while (ineqn[i] != '\0')
    {
        ch == ineqn[i];
        if (ch == '(')
        { 
           push(ch, stack);
           i++;
        }
        else if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
        {
            posteqn[j] = ineqn[i];
            j++;
        }
        else if(ch == ')')
        {
            while ((stack[TOS] != '('))
            {
                posteqn[j] = pop(stack);
                j++;
            }
            if (TOS == -1)
            {
                printf("Incorrect expression.");
                exit(1);
            }
            
        }
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            while (getp(stack[TOS]) > getp(ch)){
                posteqn[j] = pop(stack);
                j++;
            }
            }
            push(ineqn[i],stack);
        }
        while (TOS != -1)
        {
            posteqn[j] = pop(stack);
            j++;
        }
        posteqn[j] = '\0';

        puts(posteqn);
        

    }
    
void push(char a, char arr[])
{
    if (TOS >= MAX - 1)
    {
        printf("Stack Overflow\n");
        exit(0);
    }
    else
    {
        TOS = TOS + 1;
        arr[TOS] = a;
    }
}

char pop(char arr[])
{
    if (TOS == -1)
    {
        printf("Stack underflow\n");
        exit(0);
    }
    else
    {
        char item;
        item = arr[TOS];
        TOS--;
        return item;
    }
}

int getp(char ch){
    if(ch == '/' || ch == '*'){
        return 2;
    }
    if(ch == '+' || ch == '-'){
        return 1;
    }
 
}
