#include<stdio.h>
void reverse(char s[]);
void main()
{
    char s[20];
    printf("enter the string:");
    gets(s);
    reverse(s);
    printf("reversed array is %s",s);
    }
    void reverse(char s[])
    {
        int i,j,temp;
        for(i=0;s[i]!='\0';i++);
        j=i;
        i=0;
        for ( i = 0; i < j/2; i++)
        {
            temp=s[i];
            s[i]=s[j-1-i];
            s[j-1-i]=temp;
        }
        

    }