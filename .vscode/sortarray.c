#include<stdio.h>
#include<stdlib.h>
void sort(int *,int );
void main()
{
    int *s,i,n;
    printf("how many number you want to insert:\n");
    scanf("%d",&n);
    s=(int*) malloc (n*sizeof(int));
    if (s==NULL)
    {
        printf("error in allocation");
        exit(1);
    }
    printf("enter number\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",s);
        s++;
    }
    s=s-n;
    sort(s,n);
   printf("shorted list is:\n");
   for ( i = 0; i <n; i++)
   {
    printf("%d\n",*s);
    s++;
   }
    
    
}
void sort(int *a,int n)
{
    int i,j,t;
    for ( i = 0; i < n; i++)
    {
        for ( j =i+1; j < n; j++)
        {
            if (*(a+i)>*(a+j))
            {
                t=*(a+i);
                *(a+i)=*(a+j);
                *(a+j)=t;
            }
            
        }
        
    }
    
}