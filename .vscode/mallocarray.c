#include<stdio.h>
#include<stdlib.h>
void main()
{
    char *ptr,*str,*temp,*j;
    int i;
    str=(char*)malloc(5*sizeof(char));
    ptr=(char*)calloc(5,sizeof(char));
    if (str==NULL)
    {
        printf("error in allocation");
        exit(0);
    }
    if(ptr== NULL)
    {
        printf("error in allocation");
        exit(0);
    }
    temp=str;
    j=ptr;
    for ( i = 0; i <4 ; i++)
    {
       *str=65+i;
       *ptr=97+i;
       ptr++;
       str++;

    }
    str=NULL;
    ptr=NULL;
    printf("string=%s\n",temp);
    printf("string=%s",j);
    free(str);
    free(ptr);
}