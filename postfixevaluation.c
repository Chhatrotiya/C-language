#include <stdio.h>
#include <stdlib.h>
#define max 50
float st[max];
int tos = -1;
void push(float[], float);
float pop(float[]);
float posteva(char[]);
void main()
{
    float val;
    char post[50];
    printf("enter the postfix expression:\n");
    gets(post);
    val = posteva(post);
    printf("value of postfix expression is:%.2f", val);
}
float posteva(char post[])
{
    int i = 0;
    float op1, op2, value;
    while (post[i] != '\0')
    {
        if (isdigit(post[i]))
        {
            push(st, (float)(post[i]-'0'));
        }
        else
        {
            op2 = pop(st);
            op1 = pop(st);
            switch (post[i])
            {
            case '+':
                value = op1 + op2;
                break;
            case '-':
                value = op1 - op2;
                break;
            case '/':
                value = op1 / op2;
                break;
            case '*':
                value = op1 * op2;
                break;
            case '%':
                value = (int)op1 % (int)op2;
                break;
            }
            push(st, value);
        }
        i++;
    }
    return pop(st);
}
void push(float st[], float a)
{
    if (tos >= max - 1)
    {
        printf("stack overflow");
    }
    else
    {
        tos++;
        st[tos] = a;
    }
}
float pop(float st[])
{
    float val=0;
    if (tos == -1)
    {
        printf("stack underflow\n");
    }
    else
    {
        val = st[tos];
        tos--;
    }
    return val;
}