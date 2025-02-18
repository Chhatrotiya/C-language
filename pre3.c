#include<stdio.h>
#include<string.h>

int len(char*);
char* rev(char*);

int main()
{
    char s[50];
    int l;
    
    printf("Enter the string: ");
    scanf("%s", s);
    
    l = len(s);
    printf("Length of string is %d\n", l); 
    
    printf("Reversed string is: %s\n", rev(s));
    
    return 0;
}

int len(char *p)
{
    int i;
    
    for (i = 0; *(p + i) != '\0'; i++)
        ;
    
    return i;
}

char* rev(char *p)
{
    int length = strlen(p);
    char t;
    int i;
    
    for (i = 0; i < length / 2; i++)
    {
        t = *(p + i);
        *(p + i) = *(p + length - 1 - i);
        *(p + length - 1 - i) = t;
    }
    
    return p;
}