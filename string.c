#include<stdio.h>
int len(char*);
char* rev(char *);
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
    char t;
    int l,i;
    for(l=0;*(p+l)!='\0';l++)
    
        for(i=0;i<l/2;i++)
        {
            t=*(p+i);
            *(p+i)=*(p+l-1-i);
            *(p+l-1-i)=t;
        }
    
    return(p);
}