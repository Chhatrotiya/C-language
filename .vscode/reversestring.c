#include<stdio.h>
void main()
{
    char s[100];
    char *p;
    int i,n;
    p=s;
    printf("enter the string: ");
    gets(s);
    for ( i = 0;*(p+i)!='\0'; i++)
    {
        n++;
    }
    printf("length of string is: %d\n\n",n);
    printf("reverse string is: "); 
    for(i=n-1;i>=0;i--)
    printf("%c",*(p+i));
   

}