#include<stdio.h>
#include<stdlib.h>
struct cube{
    int n,c;
};
void main()
{
    struct cube *p;
    int n,i;
    printf("how many members:\n");
    scanf("%d",&n);
    p=(struct cube *) malloc (n*sizeof(struct cube));
    for ( i = 0; i <n ; i++)
    {
        printf("enter the number:\n");
        scanf("%d",&(p->n));
        p->c=p->n*p->n*p->n;
        p++;
    }
    p=p-n;
    printf("number\tcube\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t%d\t\n",p->n,p->c);
        p++;
    }
    
    
}