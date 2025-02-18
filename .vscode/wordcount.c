#include<stdio.h>
void main()
{
    char str[100];
    int i,count=1;
    printf("please enter the string:\n");
    gets(str);
    for ( i = 0; str[i] != '\0'; i++)
    {
       if(str[i]==' ' || str[i]=='\t')
       {
        count++;
        printf("\n");
       }
       else{
        printf("%c",str[i]);
       }

    }
    printf("number of word is %d",count);
    
}