#include <stdio.h>
#include <stdlib.h>
#define max 50
int st[max];
int tos = -1;
void push(int, int[]);
int pop(int[]);
void main()
{

    int b, num;
    printf("enter the number:");
    scanf("%d", &num);
    while (num > 0)
    {
        b = num % 2;
        push(b, st);
        num = num / 2;
    }
    printf("binary value is:\n");
    while (tos >= 0)
    {
        printf("%d ", pop(st));
    }
}
void push(int b, int st[])
{
    if (tos >= max - 1)
    {
        printf("stack overflow");
        exit(0);
    }
    else
    {
        tos++;
        st[tos] = b;
    }
}
int pop(int st[])
{
    int val;
    if (tos < 0)
    {
        printf("stack underflow");
        exit(0);
    }
    else
    {
        val = st[tos];
        tos--;
    }
    return val;
}