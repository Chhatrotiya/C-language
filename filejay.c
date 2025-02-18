#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *f;
    char ch;
    f=fopen("jay.txt","w");
    if(f==NULL)
    {
    printf("file doesn't exists");
    exit(0);
    }
    while (ch!='*')
    {
        scanf("%c",&ch);
        fputc( ch,f);
    }
    fclose(f);
    
}