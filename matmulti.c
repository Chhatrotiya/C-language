#include<stdio.h>
int main()
{
    
   int a[5]={22,13,24,15,86};
    int i,j,t;
    for (i=0;i<4;i++)
    {
       for (j=i+1;i<5;j++)
       {
        if (a[i]>a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        
        }
        
       }
 
       
    }
    printf("ascending order is\n");
    
    for( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
    }
    
    
    
    return 0;
}
