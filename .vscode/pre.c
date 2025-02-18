#include<stdio.h>
#include<string.h>


int len(char*);
char* rev(char*);

int main()
{
    char  s[50];
    int l;
    printf("enter the sring : ");
    scanf("%s",s);
    l=len(s);
    printf("length of string is %d\n",l); 
    
    printf("revers string is =%S\n",rev(s));


    return 0;

}
int len(char *p)
{
    int i;
    for ( i = 0; *(p+i)!='\0'; i++);
 return(i);
    
}
char* rev(char *p)
{
   int  ln=strlen(p);
    char t;
    int i;
   
   

        for(i=0;i < ln / 2;i++)
        {
            t= *(p+i);
            *(p+i)= *(p+ln-1-i);
            *(p+ln-1-i)= t;
        }
        return p;
}