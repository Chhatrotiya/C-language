#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int roll;
    char name[20],bname[20];
}x[5];
void main()
{
    FILE *fp;
    int i;
    fp=fopen("ja.txt","w");
    if (fp==NULL)
    {
        printf("file doesn't exists");
        exit(0);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("enter the roll no, name and branch name");
        scanf("%d",&x[i].roll);
        fflush(stdin);
        gets(x[i].name);
        gets(x[i].bname);
        fprintf(fp,"%d\t%s\t%s\n",x[i].roll,x[i].name,x[i].bname);
    }
    fclose(fp);
    
    
}