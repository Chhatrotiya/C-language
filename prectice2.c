#include<stdio.h>
void input(int *);
void output(int *);
void sort(int *);
void main()
{
    int a[5];
    printf("enter 5 number of array\n");
    input(a);
    printf("entered array is : \n");
    output(a);
    printf("sorted number of array is:\n");
    sort(a);
    output(a);
}
void input(int *p)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
       scanf("%d",p+i);
    }
    
}
void output(int *p)
{
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("%d  \n",*(p+i));
    }
    
}
void sort(int *p)
{
    int round,i,t;
    for(round=0;round<5;round++)
    {
        for (i = 0; i < 5; i++)
        {
            if (*(p+i)>*(p+i+1))
            {
              t=*(p+i);
              *(p+i)=*(p+i+1);
              *(p+i+1)=t;
            }
            
        }
        
    }
}