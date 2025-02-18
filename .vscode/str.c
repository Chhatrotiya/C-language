#include<stdio.h>
void main()
{
    char rev[30],str[30];
    int i,j,count=0;
    printf("enter the string you eant to reverse");
    gets(str);
    for ( i = 0; str[i] != NULL; i++)
    {
       count++;
    }
    for(i=count-1,j=0;i>=0;i--,j++)
    {
        rev[j]=str[i];
    }
    rev[j]=NULL;
    printf("reverse string is %s",rev);
}