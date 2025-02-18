#include<stdio.h>
void main()
{
    char str[100],ustr[100],lstr[100];
    int i;
    printf("please enter the string:\n");
    gets(str);
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]>='a' && str[i]<='z')
        {
            ustr[i]=str[i]-32;
        }
        else{
            ustr[i]=str[i];
        }
        if (str[i]>='A' && str[i]<='Z')
        {
            lstr[i]=str[i]+32;
        }
        else{
            lstr[i]=str[i];
        }
    }
    lstr[i]='\0';
    ustr[i]='\0';
    printf("orignal string=%s\n lowercase string= %s\n uppercase string=%s",str,lstr,ustr);
    
}