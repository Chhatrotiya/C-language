#include<stdio.h>
void main()
{
    int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i,n;
    int g[3]={0,0,0};
    int a[12];
    printf("please enter the number of months");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
      printf("enter the months");
      scanf("%d",&a[i]);

    }
    for ( i = 0; i <n; i++)
    {
       if(m[a[i]-1]==28)
       g[0]++;
       else if(m[a[i]-1]==30)
       g[1]++;
       else if(m[a[i]-1]==31)
       g[2]++;

    }
    printf("month of 28=%d\n month of 30=%d\n month of 31=%d",g[0],g[1],g[2]);
    
    

}