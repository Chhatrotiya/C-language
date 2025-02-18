#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("jay.txt","r");
    if (fp1==NULL)
    {
        printf("file f1 doesn't exists");
        exit(0);
    }

    fp2=fopen("ja.txt","w");
    if (fp2==NULL)
    {
        printf("file f2 doesn't exists");
        exit(0);
    }
    while (1)
    {
        ch=fgetc(fp1);
        if (ch==EOF)
        {
            break;
        }

        fputc(ch,fp2);
    }
 fclose(fp1);
 fclose(fp2);   
    
}