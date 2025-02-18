#include<stdio.h>
void main()
{
    char str[100];
    int x,y,i;
    printf("enter the string:");
    scanf("%s",str);
    printf("how many charecter you want to extract:");
    scanf("%d",&x);
    printf("from where to:");
    scanf("%d",&y);
    for ( i = y-1; i < x+y-1; i++)
    {
        printf("%c",str[i]);
    }
    
}